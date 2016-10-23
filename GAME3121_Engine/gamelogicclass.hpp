#pragma once

class GamelogicClass
{
public:
    GamelogicClass();
    GamelogicClass(const GamelogicClass&);
    ~GamelogicClass();

    bool Initialize();
    void Shutdown();
    void BeginScene();
    void EndScene();
};