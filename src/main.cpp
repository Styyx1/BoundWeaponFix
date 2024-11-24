#include "hooks.h"

SKSEPluginLoad(const SKSE::LoadInterface* a_skse)
{
	SKSE::Init(a_skse);

	SKSE::AllocTrampoline(14);

	Hooks::BoundItemMonitor::Install();

	return true;
}
