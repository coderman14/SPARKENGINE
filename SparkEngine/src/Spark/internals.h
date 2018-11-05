#pragma once
#ifdef SPR_PLATFORM_WINDOWS
	#ifdef SPR_BUILD_DLL
		#define SPARK_API __declspec(dllexport)
	#else
		#define SPARK_API __declspec(dllimport)
	#endif
#else
	#error WINDOWS ONLY
#endif