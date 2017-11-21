#ifndef __DRAWGRAPH__
#define __DRAWGRAPH__

#include "CalcProcess.h"

void drawLine(HDC hdc, int sx, int sy, int ex, int ey, COLORREF color);
void drawGraph(HDC hdc, int spx, int spy, int epx, int epy, GraphData* gd);

#endif
