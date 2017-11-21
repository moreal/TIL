#ifndef __MAINPROC__
#define __MAINPROC__

#define POS_HEIGHT_TB 30
#define POS_WIDTH_TB 10
#define HEIGHT_TB 25
#define WIDTH_TB 100
#define COUNT_TB 5

#define BTN1 200//(100 + COUNT_TB)

#include <windows.h>
#include "DrawGraph.h"

LRESULT CALLBACK MainProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

// Local
int i;
char str[128], message[128];

// Graphic
HDC hdc;
HFONT font;
PAINTSTRUCT ps;
HWND tb[COUNT_TB], btn[2];

// Calc Data
int count;
char url[128];
int Mo_size, Sample_size, Sample_inter, Sample_loop;

GraphData gd;

#endif