// Message box exe.cpp

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    MessageBox(NULL, L"Hello from MessageBoxApp.exe!", L"Message Box Example", MB_OK | MB_ICONINFORMATION);
    return 0;
}
