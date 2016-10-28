#pragma once

#include "actormanager.hpp"

class GamelogicClass
{
public:
    GamelogicClass();
    GamelogicClass(const GamelogicClass&);
    ~GamelogicClass();

    bool Initialize();
    void Shutdown();
    void Update(float);

private:
    void UpdateActors(float);

private:
    ActorManager* m_ActorManager;
};