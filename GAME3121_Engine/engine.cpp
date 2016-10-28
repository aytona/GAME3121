#include "engine.hpp"

EngineClass::EngineClass() {
    m_App = 0;
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
    return true;
}

void EngineClass::Run() {
    m_App->Run();
}

void EngineClass::Shutdown() {
    if (m_App) {
        m_App->Shutdown();
        m_App = 0;
    }
}