#pragma once

#include "actorcomponent.hpp"

template<typename T> class UIComponent : public ActorComponentClass<T>
{
public:
	UIComponent();
	UIComponent(const UIComponent&);
	~UIComponent();

	bool Initialize() { m_PosX = 0; m_PosY = 0; m_Width = 100f; m_Height = 100f; };
	bool Initialize(float, float, float, float);
	void Update(float);
	void Shutdown();

	bool IsVisible();
	void SetVisible(bool);

	const float[]* GetPosition() const;
	const float[]* GetSize() const;
	const vector<float>* GetAnchorPosition() const;

	bool SetDimension(float, float, float, float);
	bool SetPosition(float, float);
	bool SetSize(float, float);
	bool SetAnchorPosition(vector<float>);
	bool SetAnchorPosition(float, float);

private:
	bool b_Visible;
	float m_PosX, m_PosY;
	float m_Width, m_Height;
	vector<float> m_AnchorPosition;
};