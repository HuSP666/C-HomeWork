/// <ID>C087</ID>
/// <date>2020/11</date>
/// <summary>
/// 编写程序，删除字符串中间的所有星号*，如果首尾有*号，保留不变。字符串长度不超过200。
/// </summary>
/// <input>带*号的字符串（字符串中不含空格）</input>
/// <output>中间没有*号的字符串</output>
/// <sample>
/// ***street*****music***
/// ***streetmusic***
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

char* DelCharBetweenStr(char* str, int i, int j, char delch);

int main()
{
	char inStr[200];
	gets_s(inStr, 200);
	int i = 0;
	while (inStr[i++] == '*');
		int j = strlen(inStr) - 1;
	while (inStr[j--] == '*');
		printf("%s", DelCharBetweenStr(inStr, i - 1, j + 1, '*'));
	return 0;
}
/// <summary>
/// 删除字符数组i到j之间指定的字符
/// </summary>
/// <param name="str">字符数组</param>
/// <param name="i">删除的起始位置</param>
/// <param name="j">删除的结束位置</param>
/// <param name="delch">删除的字符</param>
/// <returns>删除的结果字符串</returns>
char* DelCharBetweenStr(char* str, int i, int j, char delch)
{
	//删除i到j之间所有*字符；
	while (j >= i)
	{
		if (str[j] == delch)
		{
			int n = j;
			while (str[n])
			{
				str[n] = str[n + 1];
				n++;
			}
			str[n] = 0;
		}
		j--;
	}
	return str;
}
