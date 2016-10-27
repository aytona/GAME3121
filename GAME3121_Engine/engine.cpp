#include "engine.hpp"

EngineClass::EngineClass() {
    m_App = 0;
    m_Logic = 0;
    m_View = 0;
}

EngineClass::EngineClass(const EngineClass& other) {

}

EngineClass::~EngineClass() {

}

bool EngineClass::Initialize() {
    m_App->Initialize();
    if (!m_App) {
        return false;
    }

    m_Logic->Initialize();
    if (!m_Logic) {
        return false;
    }

    m_View->Initialize(m_screenWidth, m_screenHeight, hwnd);
    if (!m_View) {
        return false;
    }

    return true;
}

void EngineClass::Update(float deltaTime) {

}

void EngineClass::Shutdown() {
    if (m_App) {
        m_App->Shutdown();
        m_App = 0;
    }
    if (m_Logic) {
        m_Logic->Shutdown();
        m_Logic = 0;
    }
    if (m_View) {
        m_View->Shutdown();
        m_View = 0;
    }
}