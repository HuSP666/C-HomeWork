/// <ID>C120</ID>
/// <date>2020/11</date>
/// <summary>
/// 编写函数，去掉一个字符串中除头部和尾部空格外的所有空格，并编写主函数进行调用测试
/// </summary>
/// <input>输入的字符串长度不会超过200</input>
/// <output>结果字符串</output>
/// <sample>
///      we5et et ewtew ter te   et     
///      we5etetewtewterteet
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
	char inputStr[100];
	gets_s(inputStr,100);

	//找字符串左边第一个非空格字符
	int i = 0;
	while (inputStr[i] && inputStr[i] == ' ')
	{
		i++;
	}

	//找字符串右边第一个非空格字符
	int j = strlen(inputStr) - 1;
	while (inputStr[j] && inputStr[j] == ' ')
	{
		j--;
	}
	printf("%s", DelCharBetweenStr(inputStr, i, j, ' '));
	return 0;
}

char* DelCharBetweenStr(char* str, int i, int j, char delch)
{
	//删除i到j之间所有空字符；
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
