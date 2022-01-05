#pragma once

#ifdef HZ_PLATFORM_WINDOWS

	#if HZ_DYNAMIC_LINK

		#ifdef HZ_BUID_DLL
			#define HAZEL_API __declspec(dllexport)
		#else // HZ_BUID_DLL
			#define HAZEL_API __declspec(dllimport)
		#endif // HZ_BUID_DLL

	#else HZ_DYNAMIC_LINK
		#define HAZEL_API
	#endif // HZ_DYNAMIC_LINK

#else // HZ_PLATFORM_WINDOWS
	#error Hazle onyl supports Windows!
#endif // HZ_PLATFORM_WINDOWS



#ifdef HZ_DEBUG
	#define HZ_ENABLE_ASSERTS
#endif // HZ_DEBUG


#ifdef HZ_ENABLE_ASSERTS
	#define HZ_ASSERT(x, ...) { if(!(x)) { HZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define HZ_CORE_ASSERT(x, ...) { if(!(x)) { HZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else // HZ_ENABLE_ASSERTS
	#define HZ_ASSERT(x, ...)
	#define HZ_CORE_ASSERT(x, ...)
#endif // HZ_ENABLE_ASSERTS


#define BIT(x) (1 << x)

#define HZ_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1) 