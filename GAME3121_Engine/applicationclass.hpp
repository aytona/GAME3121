#pragma once

#include <Windows.h>
#include "gamelogicclass.hpp"
#include "gameviewclass.hpp"

class ApplicationClass
{
public:
    ApplicationClass();
    ApplicationClass(const ApplicationClass&);
    ~ApplicationClass();

    bool Initialize();
    void Shutdown();
    void Run();

private:
    bool Frame();
    void InitializeWindows(int&, int&);
    void ShutdownWindows();

private:
    LPCWSTR m_applicationName;
    HINSTANCE m_hinstance;
    HWND m_hwnd;
    GameviewClass* m_GameView;
    GamelogicClass* m_GameLogic;
};