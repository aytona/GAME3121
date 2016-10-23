#pragma once

#include <vector>
using namespace std;

class ActorClass
{
public:
    ActorClass();
    ActorClass(const ActorClass&);
    ~ActorClass();

    bool Initialize();
    void Update(float);
    void Shutdown();

    const vector<vector<vector<float>>>* GetPosition() const;
    const vector<vector<vector<float>>>* GetRotation() const;
    const vector<vector<vector<float>>>* GetScale() const;

    bool SetTransform(vector<vector<vector<float>>>, vector<vector<vector<float>>>, vector<vector<vector<float>>>);
    bool SetPosition(vector<vector<vector<float>>>);
    bool SetPosition(float, float, float);
    bool SetRotation(vector<vector<vector<float>>>);
    bool SetRotation(float, float, float);
    bool SetScale(vector<vector<vector<float>>>);
    bool SetScale(float, float, float);

private:
    vector<vector<vector<float>>> m_Position;
    vector<vector<vector<float>>> m_Rotation;
    vector<vector<vector<float>>> m_Scale;
};