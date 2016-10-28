#include <Windows.h>
#include <stdlib.h>
#include "engine.hpp"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT) {

    EngineClass* engine;
    bool result;

    engine = new EngineClass;
    if (!engine) {
        exit(0);
    }

    result = engine->Initialize();
    if (result) {
        engine->Run;
    }

    engine->Shutdown();
    delete engine;
    engine = 0;

    return 0;
}