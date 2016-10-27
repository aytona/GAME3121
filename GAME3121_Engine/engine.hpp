#pragma once

#include "applicationclass.hpp"
#include "gamelogicclass.hpp"
#include "gameviewclass.hpp"

class EngineClass {
public:
    EngineClass();
    EngineClass(const EngineClass&);
    ~EngineClass();

    bool Initialize();
    void Update(float);
    void Shutdown();

private:
    HWND hwnd;
    ApplicationClass* m_App;
    GamelogicClass* m_Logic;
    GameviewClass* m_View;
    int m_screenWidth, m_screenHeight;
};