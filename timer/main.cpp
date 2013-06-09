#include <windows.h>
#include <commctrl.h>
#include <stdio.h>
#include "resource.h"

HINSTANCE hInst;

BOOL CALLBACK DlgMain(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
    case WM_INITDIALOG:
    {
    }
    return TRUE;

    case WM_CLOSE:
    {
        EndDialog(hwndDlg, 0);
    }
    return TRUE;

    case WM_COMMAND:
    {
        switch(LOWORD(wParam))
        {
        }
    }
    return TRUE;
    }
    return FALSE;
}


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    hInst=hInstance;
    InitCommonControls();
    HANDLE hRec;
    HANDLE hStop;

    #define btn1 4000
    #define btn2 5000

    hrec = CreateWindowEx(WS_EX_STATICEDGE, "button", "record", WS_CHILDWINDOW | BS_PUSHBUTTON | WS_VISIBLE, 110, 175, 70, 30, ,(HMENU) )
    return DialogBox(hInst, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)DlgMain);
}
