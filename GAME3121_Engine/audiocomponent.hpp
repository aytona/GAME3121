#pragma once

#include "actorcomponent.hpp"
#include "audio.hpp"

template<typename T> class AudioComponent : public ActorComponentClass<T>, public Audio
{
public:
	AudioComponent();
	AudioComponent(const AudioComponent&);
	~AudioComponent();

	bool Initialize() { m_Volume = 50f; b_IsPlaying = true; b_IsLooping = false; };
	bool Initialize(float, bool, bool);
	void Update(float);
	void Shutdown();
	
	void Play();
	void Stop();
	void Resume();
	void Pause();
	void Loop(bool);

	void SetVolume(float);
	const float* GetVolume() const;
	
	void SetAudio(Audio);
	const Audio* GetAudio() const;

private:
	float m_Volume;
	bool b_IsPlaying, b_IsLooping, b_IsPaused, b_IsLooping;
	Audio* m_Audio;
};