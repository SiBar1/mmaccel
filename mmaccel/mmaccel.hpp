#pragma once

extern "C"
{
	__declspec( dllimport ) void mmaccel_register_hooks(char const* path);
	__declspec( dllimport ) void mmaccel_start(char const* path);

} // extern "C"