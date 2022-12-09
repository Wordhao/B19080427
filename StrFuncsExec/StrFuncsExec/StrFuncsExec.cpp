#include <iostream>
#include"StrStaticLib.h"
using namespace std;

int main()
{
	char* str1 = NULL;

	//调用静态库中的strcpy函数，将字符串"Windows"复制到str1，并输出str1，然后释放str1内存
	str1 = StringFuncs::MyStringFuncs::strcpy("Windows");
	if (str1 != NULL) free(str1);
	//调用静态库中的strcpy函数，将 NULL 复制到str1，并输出str1，然后释放str1内存
	str1 = StringFuncs::MyStringFuncs::strcpy(NULL);
	if (str1 != NULL) free(str1);
	//调用静态库中的strcpy函数，将 "" 复制到str1，并输出str1，然后释放str1内存
	str1 = StringFuncs::MyStringFuncs::strcpy("");
	if (str1 != NULL) free(str1);

	//调用静态库中的strcat函数，将字符串"Hello "和" World!" 拼接到str1，并输出str1，然后释放str1内存
	str1 = NULL;
	StringFuncs::MyStringFuncs::strcat(str1, "Hello");
	StringFuncs::MyStringFuncs::strcat(str1, "World!");
	if (str1 != NULL) free(str1);
	//调用静态库中的strcat函数，将 NULL 和 NULL 拼接到str1，并输出str1，然后释放str1内存
	StringFuncs::MyStringFuncs::strcat(str1, NULL);
	StringFuncs::MyStringFuncs::strcat(str1, NULL);
	if (str1 != NULL) free(str1);
	//调用静态库中的strcat函数，将 NULL 和 "" 拼接到str1，并输出str1，然后释放str1内存
	StringFuncs::MyStringFuncs::strcat(str1, NULL);
	StringFuncs::MyStringFuncs::strcat(str1, "");
	if (str1 != NULL) free(str1);
	return 0;
}