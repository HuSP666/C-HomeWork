/*�������5��Ӣ�ĵ��ʵ��ַ����飨����ά�ַ����飩��
��������5�����ʣ����ֵ�˳��Ѱ��������С���ʲ������
���룺5������
�����������С���ʣ����ֵ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


/// <summary>
/// �Ե��ʵ�ð������
/// </summary>
/// <param name="word">�����������</param>
/// <param name="n">����</param>
void BubbleWord(char word[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (strcmp(word[j], word[j - 1]) < 0)
			{
				char temp[100];
				strcpy(temp, word[j]);
				strcpy(word[j], word[j - 1]);
				strcpy(word[j - 1], temp);
			}
		}
	}
}

int main()
{
	int n;
	char word[5][100];
	for (int i = 0; i < 5; i++)
	{
		(void)scanf("%s", &word[i]);
	}
	BubbleWord(word, 5);
	printf("max:%s min:%s\n", word[4], word[0]);
	return 0;
}

