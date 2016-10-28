#include "gamelogicclass.hpp"

GamelogicClass::GamelogicClass() {
    m_ActorManager = 0;
}

GamelogicClass::GamelogicClass(const GamelogicClass& other) {

}

GamelogicClass::~GamelogicClass() {

}

bool GamelogicClass::Initialize() {
    m_ActorManager = new ActorManager;
    if (!m_ActorManager) {
        return false;
    }

    return true;
}

void GamelogicClass::Shutdown() {
    if (m_ActorManager) {
        m_ActorManager->Shutdown();
        m_ActorManager = 0;
    }
}

void GamelogicClass::Update(float deltaTime) {
    UpdateActors(deltaTime);
}

void GamelogicClass::UpdateActors(float deltaTime) {
    for (size_t i = 0; i < m_ActorManager->GetSize(); i++) {
        m_ActorManager->GetActor(i).Update(deltaTime);
    }
}

