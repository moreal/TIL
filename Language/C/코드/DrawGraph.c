#include <windows.h>
#include <stdio.h>

#include "DrawGraph.h"
#include "CalcProcess.h"
#include "MainProc.h"

void drawLine(HDC hdc, int sx, int sy, int ex, int ey, COLORREF color)
{
	HPEN hPen = CreatePen(PS_SOLID, 1, color);
	SelectObject(hdc, hPen);
	MoveToEx(hdc, sx, sy, NULL);
	LineTo(hdc, ex, ey);
	DeleteObject(SelectObject(hdc, GetStockObject(BLACK_PEN)));
}

// array , 시작 점, 끝 점, 개수 , 간격
void drawGraph(HDC hdc, int spx, int spy, int epx, int epy, GraphData* gd)
{
	int i, max = -1, min = 900000, amount = gd->count;

	int width, height, wInter, vh;
	int preX, preY, nextX, nextY;

	for (i = 0; i < amount; ++i)
	{
		if (gd->datas[i] > max)
			max = gd->datas[i];
		if (gd->datas[i] < min)
			min = gd->datas[i];
	}

	width = epx - spx;
	height = epy - spy;
	wInter = width / (gd->count + 1);
	vh = height / (max - min);
	
	preX = spx;
	preY = epy;

	for (i = 0; i < amount; ++i)
	{
		nextX = preX + wInter;
		nextY = epy - gd->datas[i] * vh;

		if (nextY < spy) nextY = spy;
		else if (nextY > epy) nextY = epy;

		drawLine(hdc, preX, preY, nextX, nextY, RGB(255,0,0));

		preX = nextX;
		preY = nextY;
	}

	// Base Line;
	drawLine(hdc, spx, spy, spx, epy, RGB(0, 0, 0)); // Left line
	drawLine(hdc, spx, epy, epx, epy, RGB(0, 0, 0)); // Below line

	// MIN value
	sprintf_s(message, 128, "%f", gd->min);
	TextOut(hdc, spx, epy + 10, message, 5);
	
	// MAX value
	sprintf_s(message, 128, "%f", gd->max);
	TextOut(hdc, epx - 40, epy + 10, message, 5);

	// MAX count
	sprintf_s(message, 128, "%d", max);
	TextOut(hdc, spx - 50, spy, message, strlen(message));

	// MIN count
	sprintf_s(message, 128, "%d", min);
	TextOut(hdc, spx - 50, epy - 20, message, strlen(message));

	// 평균
	sprintf_s(message, 128, "E(!X):%.05f", gd->E);
	TextOut(hdc, epx - 30, spy + 40, message, strlen(message));

	// 분산
	sprintf_s(message, 128, "V(!X):%.05f", gd->V);
	TextOut(hdc, epx - 30, spy + 55, message, strlen(message));

	// 표준편차
	sprintf_s(message, 128, "S(!X):%.05f", gd->S);
	TextOut(hdc, epx - 30, spy + 70, message, strlen(message));
}