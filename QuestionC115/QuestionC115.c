/*ͳ��ѡƱ��������ѡ�˷ֱ���Li��Zhang��Wang��
 *Li �Ĵ�����1��Zhang�Ĵ�����2��
 *Wang�Ĵ�����3��������������Ʊ�˴��ŵ����֣���ͶƱ����
 *ֱ������ - 1��ͶƱ������
 *Ȼ��ͳ��ÿ���˵ĵ�Ʊ���ͷ�Ʊ����
 *���� - 1, 1, 2, 3������Ϊ��Ʊ��
 *���룺�������������һ������ - 1���������ÿ����֮���пո�
 *������ĸ��������Կո���������������˵�Li��Zhang��Wang�ĵ�Ʊ���Լ���Ʊ����
 *�����ʽ��"%d %d %d %d\n"
 *
 *Cui Shuning (��������2020/11
*/ 

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int count[4] = {0};
	int n;
	(void)scanf("%d", &n);
	while (n != -1)
	{
		n >= 1 && n <= 3 ? count[n]++ : count[0]++;
		(void)scanf("%d", &n);
	}
	printf("%d %d %d %d", count[1], count[2],
	       count[3], count[0]);
	return 0;
}
///�Լ���switchд��
/*
#include<stdio.h>
int main()
{
	int n, L = 0, Z = 0, W = 0, gg = 0;
	do
	{
		scanf("%d", &n);
		switch (n) 
		{
		case 1:L++; continue;
		case 2:Z++; continue;
		case 3:W++; continue��
		case -1: continue;		///���е�Ҫ
		default:gg++; continue;
		}
	}while(n!=-1);
	printf("%d %d %d %d\n", L, Z, W, gg);
	return 0;
}*/