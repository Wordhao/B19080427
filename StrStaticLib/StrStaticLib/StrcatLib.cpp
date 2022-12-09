// StrcatLib.cpp : 定义静态库的函数strcat
//
#include "pch.h"
#include "StrStaticLib.h"

#include <stdexcept>
#include <stdlib.h>

using namespace std;

namespace StringFuncs
{
	char* MyStringFuncs::strcat(const char* src1, const char* src2)
	{
		//实现函数strcat
		int len1 = 0, len2 = 0;
		const char* p1 = src1;
		const char* p2 = src2;

		while (*p1++ != 0) len1++;
		while (*p2++ != 0) len2++;

		char* dst = (char*)malloc(len1 + len2 + 1);

		for (int i = 0; i < len1; i++)
			dst[i] = src1[i];
		for (int i = 0; i < len2; i++)
			dst[len1 + i] = src2[i];

		dst[len1 + len2] = 0;

		return dst;

	}

}