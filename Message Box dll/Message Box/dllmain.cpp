#include <windows.h>
#include <pch.h>
BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        MessageBox(NULL, L"DLL attached", L"Info", MB_OK | MB_ICONINFORMATION); // L prefix for wide string
        break;
    case DLL_PROCESS_DETACH:
        MessageBox(NULL, L"DLL detached", L"Info", MB_OK | MB_ICONINFORMATION); // L prefix for wide string
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    }
    return TRUE;
}
