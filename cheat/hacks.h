#pragma once
#include "memory.h"

namespace hacks
{
	void VisualsThread(const Memory& mem) noexcept;
	void AimbotThread(const Memory& mem) noexcept;
	void MovementThread(const Memory& mem) noexcept;
}