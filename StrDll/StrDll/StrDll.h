// StrDll.h
#pragma once

#ifdef STRINGDLL_EXPORTS
#define STRINGDLL_API __declspec(dllexport)
#else
#define STRINGDLL_API __declspec(dllimport)
#endif

extern "C" STRINGDLL_API int MyStrcmp(const char* str1, const char* str2);
