#pragma once

#ifdef HZ_PLATFORM_WINDOWS

	#ifdef HZ_BUID_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif // HZ_BUID_DLL

#else

	#error Hazle onyl supports Windows!

#endif // HZ_PLATFORM_WINDOWS
