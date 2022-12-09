//本项目用显式链接的方式调用dll
#include <iostream>

#include "windows.h"

using namespace std;
typedef int (*PMyStrcmp)(const char* str1, const char* str2);

int main()
{
	//使用LoadLibrary函数装载动态库
	HMODULE hDll = LoadLibrary(L"StrDll.dll");
	if (hDll == NULL)return 0;
	//使用GetProcAddress获取动态库中的函数
	PMyStrcmp MyStrcmp = (PMyStrcmp)GetProcAddress(hDll, "MyStrcmp");
	//调用动态库中的MyStrcmp("Class","Classes")，期望输出结果 -1
	if (MyStrcmp != NULL)
	{
		cout << MyStrcmp("Class", "Classes");
	}
	//调用动态库中的MyStrcmp("Class","Class")，期望输出结果 0
	if (MyStrcmp != NULL)
	{
		cout << MyStrcmp("Class", "Class");
	}
	//调用动态库中的MyStrcmp("Class","C")，期望输出结果 1
	if (MyStrcmp != NULL)
	{
		cout << MyStrcmp("Class", "C");
	}
	//调用动态库中的MyStrcmp("Class",NULL)，期望输出结果 1
	if (MyStrcmp != NULL)
	{
		cout << MyStrcmp("Class", NULL);
	}
	//调用动态库中的MyStrcmp(NULL , NULL)，期望输出结果 0
	if (MyStrcmp != NULL)
	{
		cout << MyStrcmp(NULL, NULL);
	}
	//使用FreeLibrary释放动态链接库
	FreeLibrary(hDll);
	return 0;
}