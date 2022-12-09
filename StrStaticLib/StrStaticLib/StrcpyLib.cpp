// StrcpyLib.cpp : 定义静态库的函数strcpy。
//
#include "pch.h"
#include "StrStaticLib.h"

#include <stdexcept>

using namespace std;

namespace StringFuncs
{
	char* MyStringFuncs::strcpy(const char* src)
	{
			//实现函数strcpy
		if (src == NULL)
		{
			char* s = (char*)malloc(1);
			*s = '\0';
			return s;
		}
		else {
			int len = 0, i = 0;
			while (src[i] != '\0')
			{
				len++;
				i++;
			}
			char* dst = (char*)malloc(sizeof(char) * (len + 1));
			for (i = 0; i < len; i++)
			{
				dst[i] = src[i];
			}
			dst[len] = '\0';
			return dst;
		}
			//函数功能为复制字符串
	}

}