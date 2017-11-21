#include <windows.h>
#include <winuser.h>
#include <string.h>
#include <stdio.h>

#include "DlgProc.h"
#include "MainProc.h"
#include "DrawGraph.h"
#include "CalcProcess.h"

LRESULT CALLBACK MainProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch(msg)
	{
		case WM_CREATE:
			// GUI Init
			for  (i = 0; i < COUNT_TB; ++i)
				tb[i] = CreateWindow("edit", "0", WS_CHILD | WS_VISIBLE | WS_BORDER |
					ES_AUTOHSCROLL | ES_CENTER, POS_WIDTH_TB * (i+1) + WIDTH_TB * i, POS_HEIGHT_TB, WIDTH_TB, HEIGHT_TB, hwnd, (HMENU)100 + i, hInstance_t, NULL);
			btn[0] = CreateWindow("button", "적용", WS_CHILD | WS_VISIBLE | WS_BORDER | ES_CENTER,
				POS_WIDTH_TB * (COUNT_TB + 1) + WIDTH_TB * COUNT_TB, POS_HEIGHT_TB, 50, 25, hwnd, (HMENU)BTN1, hInstance_t, NULL);

			SetWindowText(tb[0], "D:\\과제\\2017 확통\\2학기\\코딩\\표준편차\\datasheet.csv");
			SetWindowText(tb[1], "1000");
			SetWindowText(tb[2], "1000");
			SetWindowText(tb[3], "40");
			SetWindowText(tb[4], "1000");

			// Calc Data Setting
			strcpy_s(url, 128, "D:\\과제\\2017 확통\\2학기\\코딩\\표준편차\\datasheet.csv");
			Mo_size = 1000;
			Sample_size = 1000;
			Sample_inter = 40;
			Sample_loop = 1000;

			gd.datas = NULL;

			// Calc
			gd = CalcProcess(url, Mo_size, Sample_size, Sample_loop, Sample_inter);
			break;

		case WM_PAINT:
			hdc = BeginPaint(hwnd, &ps);
			
			font = CreateFont(15, 0, 0, 0, 0, 0, 0, 0, HANGEUL_CHARSET, 0, 0, 0, 0, "나눔고딕");
			SetTextColor(hdc, RGB(0, 0, 0));
			SetBkMode(hdc, TRANSPARENT);
			SelectObject(hdc, font);

			// TextBox Description
			TextOut(hdc, 15, 10, "데이터시트(URL)", 15);
			TextOut(hdc, POS_WIDTH_TB + WIDTH_TB + 28, 10, "모집단 크기", 11);
			TextOut(hdc, POS_WIDTH_TB * 2 + WIDTH_TB * 2 + 23, 10, "표본집단 크기", 13);
			TextOut(hdc, POS_WIDTH_TB * 3 + WIDTH_TB * 3 + 34, 10, "급간 설정", 9);
			TextOut(hdc, POS_WIDTH_TB * 4 + WIDTH_TB * 4 + 34, 10, "추출 횟수", 9);

			// Draw Graph
			drawGraph(hdc, 100, 100, 875, 600, &gd);
			
			// End WM_PAINT
			DeleteObject(font);
			EndPaint(hwnd, &ps);
			break;

		case WM_CLOSE:
			DestroyWindow(hwnd);
			break;
		
		case WM_DESTROY: // Window Destroy
			DestroyWindow(hwnd);
			PostQuitMessage(0);
			break;

		case WM_COMMAND:
			switch(LOWORD(wParam))
			{
			case BTN1:
				// Get Data
				GetWindowTextA(tb[0], url, 128);
				
				if (!strlen(url))
				{
					MessageBoxA(hwnd, "No URL", "GG NOTICE", MB_OK);
					_itoa_s(strlen(url), message, 128, 10);
					MessageBoxA(hwnd, message, "SGG NOTICE", MB_OK);
					break;
				}

				// 모집단 크기
				GetWindowTextA(tb[1], str, 128);
				if (!strlen(str) || str[0] == '0')
				{
					MessageBoxA(hwnd, "모집단 크기를 입력해 주세요", "NOTICE", MB_OK);
					break;
				}
				Mo_size = atoi(str);
				
				// 표본집단 크기
				GetWindowTextA(tb[2], str, 128);
				if (!strlen(str) || str[0] == '0')
				{
					MessageBoxA(hwnd, "표본집단 크기를 설정해주세요!!", "NOTICE", MB_OK);
					break;
				}
				Sample_size = atoi(str);
				
				// 급간 설정
				GetWindowTextA(tb[3], str, 128);
				if (!strlen(str) || str[0] == '0')
				{
					MessageBoxA(hwnd, "급간을 설정해주세요", "NOTICE", MB_OK);
					break;
				}
				Sample_inter = atoi(str);

				// 추출횟수
				GetWindowTextA(tb[4], str, 128);
				if (!strlen(str) || str[0] == '0')
				{
					MessageBoxA(hwnd, "추출 횟수를 입력해주세요", "NOTICE", MB_OK);
					break;
				}
				Sample_loop = atoi(str);

				// Calculate
				gd = CalcProcess(url, Mo_size, Sample_size, Sample_loop, Sample_inter);

				// Send WM_PAINT Message
				InvalidateRect(hwnd, NULL, TRUE);
				UpdateWindow(hwnd);

				//End
				MessageBoxA(hwnd, "적용되었습니당!!", "알려드립니당", MB_OK);
				break;
			}
			break;
		
		default:
			return DefWindowProc(hwnd, msg, wParam, lParam);
	}
	
	return 0;
}