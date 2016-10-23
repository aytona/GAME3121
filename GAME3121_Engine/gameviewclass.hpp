#pragma once

class GameviewClass
{
public:
    GameviewClass();
    GameviewClass(const GameviewClass&);
    ~GameviewClass();

    bool Initialize(int, int, HWND);            // Takes in both screen width and height, and also window handler
    void Shutdown();
    bool Frame();

private:
    bool Render();
};