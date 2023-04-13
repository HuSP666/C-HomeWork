/// <ID>C119</ID>
/// <date>2020/11</date>
/// <summary>
/// �Ӽ�������һ��32λ�Ķ�������ʽ��IP��ַ������ת��Ϊ���ʮ���Ƶı�ʾ��
/// ���������ַ����к���1��0������ַ�������������ַ���������ȷ��IP��ַ����
/// ���룺0��1���������У����ᳬ��32λ��λ������ʱ�����Զ���ǰ�油0
/// </summary>
/// <input>0��1���������У����ᳬ��32λ</input>
/// <output>IP��ַ</output>
/// <sample>
/// 101111001010101001010101
/// 0.188.170.85
/// </sample>
/// <author>Cui Shuning (��������</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char inputStr[33] = { 0 };
	char checkedStr[33] = {0};
	(void)scanf("%s", inputStr);
	//��������ַ�������copy��checkedStr����
	//�����һλ��ʼ����λ���㲹0��
	int m = strlen(inputStr) - 1;
	int n = 31;

	while (m >= 0)
	{
		if (inputStr[m] == '1' || inputStr[m] == '0')
		{
			checkedStr[n--] = inputStr[m--];
		}
		else
		{
			printf("���ַ���������ȷ��IP��ַ");
			return 0;
		}
	}
	while (n >= 0) //��λ���㲹0
	{
		checkedStr[n--] = '0';
	}

	//ת��λ����
	for (int i = 0; i < 4; i++)
	{
		int ip = 0;
		int right = 128; //2��7�η�
		for (int j = i * 8; j < i * 8 + 8; j++)
		{
			ip = ip + (checkedStr[j] - '0') * right;
			right /= 2;
		}
		i == 0 ? printf("%d", ip) : printf(".%d", ip);
		
		/*
		* ʹ�ÿ⺯��������
		char ipStr[9];
		char* voidp;
		strncpy(ipStr, checkedStr + i * 8, 8);
		ipStr[8] = 0;
		i == 0 ? printf("%d", (int)strtol(ipStr,&voidp,2)) : printf(".%d", (int)strtol(ipStr, &voidp, 2));
		*/
		
	}
	return 0;
}

