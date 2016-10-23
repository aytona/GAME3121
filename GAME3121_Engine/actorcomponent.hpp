#pragma once

#include "actor.hpp"

template<typename T> class ActorComponentClass : public ActorClass
{
public:
    ActorComponentClass();
    ActorComponentClass(const ActorComponentClass&);
    ~ActorComponentClass();

    bool Initialize();
    void Update(float);
    void Shutdown();

    void SetType(T);
    const T* GetType() const;

private:
    T* m_ComponentType;
    ActorClass* m_Actor;
};