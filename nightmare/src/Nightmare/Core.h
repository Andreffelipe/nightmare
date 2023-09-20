#pragma once

#ifdef PLATFORM_WINDOWS
#ifdef BUILD_DLL
#define NIGHTMARE_API __declspec(dllexport)
#else
#define NIGHTMARE_API __declspec(dllimport)
#endif
#else
// #error Platform not supported
#endif // PLATFORM_WINDOWS