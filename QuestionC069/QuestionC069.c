/// <ID>C069</ID>
/// <date>2020/11</date>
/// <summary>
/// ����һ����������������2���ٽ�����2���������ֵ��������ֵĸ�λ����Ӧ��ŵ���ĸ�����
/// �滻ԭ��0��Ϊa��1��Ϊb��2��Ϊc��...���Դ����ƣ�9��Ϊj��
/// ���磬1234, ����2����617���滻���Ϊgbh
/// </summary>
/// <input>һ��������</input>
/// <output>��2��������������ֺ��ַ������м���һ���ո����</output>
/// <sample>
/// 1234
/// gbh
/// </sample>
/// <sample>
/// 156790
/// 78395 hidjf
/// </sample>
/// <author>Cui Shuning (��������</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int inputNum;
	(void)scanf("%d", &inputNum);
	inputNum = inputNum / 2;
	printf("%d ", inputNum);
	
	//����תΪ�ַ���
	// number convert to string
	char str[200];
	_itoa(inputNum, str, 10);
	//ת��Ϊ��ĸ���ȡ�����
	//Take out one by one and output after converted to alphabeta
	int i = 0;
	while (str[i])
	{
		printf("%c", str[i++] - '0' + 'a');
	}
	return 0;
}
