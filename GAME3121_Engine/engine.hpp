#pragma once

#include "applicationclass.hpp"

class EngineClass {
public:
    EngineClass();
    EngineClass(const EngineClass&);
    ~EngineClass();

    bool Initialize();
    void Run();
    void Shutdown();

private:
    ApplicationClass* m_App;
};