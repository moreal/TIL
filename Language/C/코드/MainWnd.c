#include "MainWnd.h"
#include "MainProc.h"

void CreateMainWnd(Wnd* window, HINSTANCE* hInstance, const char* szClassName)
{
	// 1. register
	window->wc.style = 0;
	window->wc.lpfnWndProc = MainProc;
	window->wc.cbClsExtra = 0;
	window->wc.cbWndExtra = 0;
	
	window->wc.hInstance = *hInstance;
	window->wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	window->wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	window->wc.hbrBackground = (HBRUSH) (COLOR_WINDOW+1);
	
	window->wc.lpszClassName = szClassName;
	window->wc.lpszMenuName = NULL;
	
	if(!RegisterClass(&(window->wc)))
	{
		MessageBox(NULL, "ERR_REGISTER_CLASS", "ERROR", MB_OK | MB_ICONEXCLAMATION);
		return;
	}
	
	// Creating Window
	window->hwnd = CreateWindowEx(
		WS_EX_CLIENTEDGE,
		szClassName,
		"Probability Project",
		WS_EX_LAYERED, //WS_EX_LAYERED, // WS_OVERLAPPEDWINDOW
		CW_USEDEFAULT, CW_USEDEFAULT,
		MAIN_WIDTH, MAIN_HEIGHT,
		NULL, NULL, *hInstance, NULL
	);
	
	if(!(window->hwnd))
	{
		MessageBox(NULL, "ERR_CREATE_HWND", "ERROR", MB_OK | MB_ICONEXCLAMATION);
		return;
	}
}