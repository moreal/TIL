// Headers
#include <stdio.h>
#include <windows.h>

// Personal
#include "MainWnd.h"

// 주석을 달자

const char szClassName[] = "ProbabilityGUI";

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	CreateMainWnd(&MainWin, &hInstance, szClassName);

	ShowWindow(MainWin.hwnd, nShowCmd); // Show Window
	UpdateWindow(MainWin.hwnd);
	
	// Message Loop to keep
	while(GetMessage(&MainWin.msg, MainWin.hwnd, NULL, NULL) > 0)
	{
		TranslateMessage(&MainWin.msg); 
		DispatchMessage(&MainWin.msg);
	}
	return MainWin.msg.wParam;
}