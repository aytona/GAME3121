#pragma once

#include <vector>
#include "actor.hpp"
using namespace std;

class ActorManager {
public:
    ActorManager();
    ActorManager(const ActorManager&);
    ~ActorManager();

    bool Initialize();
    void Shutdown();
    void Add(const ActorClass&);

    const vector<ActorClass> GetActors() const;
    ActorClass GetActor(int) const;
    float GetSize();

private:
    vector<ActorClass>* m_Actors;
};