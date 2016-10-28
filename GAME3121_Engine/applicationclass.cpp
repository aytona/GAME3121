#include "applicationclass.hpp"

ApplicationClass::ApplicationClass() {
    m_GameView = 0;
    m_GameLogic = 0;
}

ApplicationClass::ApplicationClass(const ApplicationClass& other) {

}

ApplicationClass::~ApplicationClass() {

}

bool ApplicationClass::Initialize() {
    bool result;
    int screenWidth = 0;
    int screenHeight = 0;

    InitializeWindows(screenWidth, screenHeight);

    m_GameLogic = new GamelogicClass;
    if (!m_GameLogic) {
        return false;
    }

    result = m_GameLogic->Initialize();
    if (!result) {
        return false;
    }

    m_GameView = new GameviewClass;
    if (!m_GameView) {
        return false;
    }

    result = m_GameView->Initialize(screenWidth, screenHeight, m_hwnd);
    if (!result) {
        return false;
    }

    return true;
}

void ApplicationClass::Run() {
    bool done, result;
    float time = 0.0;
    float deltaTime = 1.0 / 60.0;
    done = false;
    while (!done) {
        time += deltaTime;
        result = Frame();
        if (!result) {
            done = true;
        }
        m_GameLogic->Update(time);
    }
}

void ApplicationClass::Shutdown() {
    if (!m_GameView) {
        m_GameView->Shutdown();
        m_GameView = 0;
    }
    if (!m_GameLogic) {
        m_GameLogic->Shutdown();
        m_GameLogic = 0;
    }
}

bool ApplicationClass::Frame() {
    bool result;
    result = m_GameView->Frame();
    if (!result) {
        return false;
    }
    return true;
}

void ApplicationClass::InitializeWindows(int& screenWidth, int& screenHeight) {
    screenWidth = GetSystemMetrics(SM_CXSCREEN);
    screenHeight = GetSystemMetrics(SM_CYSCREEN);
}

void ApplicationClass::ShutdownWindows() {
    DestroyWindow(m_hwnd);
    m_hwnd = NULL;
    m_hinstance = NULL;
    UnregisterClass(m_applicationName, m_hinstance);
}