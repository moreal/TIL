#pragma once

#include <windows.h>

typedef struct Wnd{
	WNDCLASS wc;
	HWND hwnd;
	MSG msg;
} Wnd;