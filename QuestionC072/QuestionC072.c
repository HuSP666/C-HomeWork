/// <ID>C072</ID>
/// <date>2020/11</date>
/// <summary>
/// �����ַ������ַ�����s�У�
/// ������һ���ַ�������c���ж�s���Ƿ���c��
/// �����򽫸��ַ���s��ɾ�����������û�У�������ַ�����NotFound����
/// </summary>
/// <input>2�У�1���ַ���(�����ո񣩺�1���ַ��������ո�</input>
/// <output>ɾ������ַ���</output>
/// <sample>
/// she smiles
/// s
/// he mile
/// </sample>
/// <sample>
/// she smiles
/// x
/// NotFound
/// </sample>
/// <author>Cui Shuning (��������</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char c[80], tofind;
	gets(c);
	scanf("%c", &tofind);
	int len = strlen(c), flag = 0;

	for (int i = 0; i < len; i++)
		if (c[i] == tofind)	flag = 1;
	if (flag==0) { printf("NotFound"); return 0; }

	for (int i = 0; i < len; i++)
		if (c[i] != tofind)
			printf("%c", c[i]);
	return 0;
}

/* { ������������(*^_^*) }
int DelSomeChar(char* str, char ch);

int main()
{
	char inputStr[100];
	char delCh[1];
	scanf("%c%c", inputStr, delCh);
	//����scanf���ȼ��ڣ�
	//gets(inputStr);
	//getchar();
	//delCh=getchar();

	printf("%s", DelSomeChar(inputStr, delCh) == 0 ? "NotFound" : inputStr);
	return 0;
}

/// <summary>
/// ɾ���ַ�����ָ�����ַ�
/// </summary>
/// <param name="str">������ַ���</param>
/// <param name="ch">ɾ�����ַ�</param>
/// <returns>ɾ�����ַ�����</returns>

int DelSomeChar(char* str, char ch)
{
	int i = 0;
	int sum = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			sum++;
			int j = 0;
			while (str[i + j + 1])
			{
				str[i + j] = str[i + j + 1];
				j++;
			}
			str[i + j] = 0;
		}
		else
		{
			i++;
		}
	}
	return sum;
}
*/