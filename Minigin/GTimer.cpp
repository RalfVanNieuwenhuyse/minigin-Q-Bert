#include "GTimer.h"

void dae::GTimer::Update()
{
	auto now = std::chrono::high_resolution_clock::now();
	m_DeltaTime = std::chrono::duration_cast<std::chrono::duration<float>>(now - m_LastTimestamp).count();
	m_LastTimestamp = now;
}

const float dae::GTimer::GetDeltaTime() const
{
	return m_DeltaTime;
}

const float dae::GTimer::GetTimeStep() const
{
	return m_Timestep;
}

const int dae::GTimer::GetFrameTime() const
{
	return m_FrameTime;
}

const std::chrono::time_point<std::chrono::steady_clock> dae::GTimer::GetLastTimeStamp() const
{
	return m_LastTimestamp;
}
