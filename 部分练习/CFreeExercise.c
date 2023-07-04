#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

//[C013] 20230411
/*
将一个大于4的正整数分解为连续的正整数之和，请显示全部分解结果。
如数字15，可以分解为：15=1+2+3+4+5 15=4+5+6 15=7+8
*/
/*
int main()
{
	int t;
	scanf("%d", &t);
	for (int n = t; n >= 2; n--)
	{
		if ((2 * t % n == 0) && ((2 * t / n - n + 1) % 2 == 0))
		{
			int a = (2 * t / n - n + 1) / 2;
			if (a <= 0)	continue;
			printf("%d=%d", t, a);
			for (int i = 1; i <= n - 1; i++)
				printf("+%d", a + i);
			printf("\n");
		}
	}
	return 0;
}*/

//[C016] 20230406
/*
若三个正整数a,b,c满足 a^2+b^2=c^2，则它们是一组勾股数。(^2表示平方，a^表示a的平方)。
编写程序，求给定区间[m,n]中的勾股数的数量(设一组勾股数满足a<b<c)。
例如[1,10]中的勾股数有(3,4,5)和(6,8,10)，则[1,10]中勾股数的数量为2。
输入：正整数m,n,   空格分隔
输出：[m,n]中的勾股数的数量
*/
/*
int min(int a, int b) { return a > b ? b : a; }
int main()
{
	int m, n, cnt = 0;
	scanf("%d%d", &m, &n);
	for (int i = m; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			for (int k = j + 1; k < min(i + j, n + 1); k++)
				if (i * i + j * j == k * k)	cnt++;
	printf("%d", cnt);
	return 0;
}*/


//[C031] 20230411
/*
求a+aa+aaa+aaaa+…+aa...a（n个），其中a为1～9之间的整数。
例如：当a = 1, n = 3时，求1+11+111之和为123；
输入：组成序列的数字a和求和项的数量n
输出：算式和结果。
*/
/*
int main()
{
	int a, n, sum = 0, i = 0;
	scanf("%d%d", &a, &n);
	int add = a;
	for (; i < (n - 1); i++)
	{
		sum = sum + add;
		printf("%d+", add);
		add = 10 * add + a;
	}
	sum = sum + add;
	printf("%d=", add);
	add = 10 * add + a;
	printf("%d", sum);
	return 0;
}*/

//[C056] 20230411
/*
给定月份的天数计算
*/
/*
int main()
{
	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month;
	(void)scanf("%d,%d", &year, &month);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month == 2)
		{
			printf("%d", day[month - 1] + 1);
			return 0;
		}
	}
	int x = day[month - 1];
	printf("%d",x);
	return 0;
}*/

//[C041] 20230515
/*
叛逆期的小明什么都喜欢反着做，连看数字也是如此（负号除外），
比如：小明会把1234它看成4321；把-1234看成-4321；
		把230看成032 (032=32)；把-230看成-032(-032=-32)。
现在，小明做了一些a+b和a-b的题目(a, b为整数且不含前导0)，
如果给你这些题目的正确答案，你能猜出小明会得到什么答案吗？

输入:两个整数x,y(-100000 < = x, y < =100000), 
		x表示a+b的正确答案，y表示a-b的正确答案。输入保证合法，且不需考虑a或b是小数的情况。

输出：输出两个整数s和t，两数之间用1个空格分开。
		其中：s表示小明将得到的a+b答案，t表示小明将得到的a-b答案。

样例输入：20 6
样例输出：38 24
*/
/*
int Resverse(int x);
int main()
{
	int x, y;
	(void)scanf("%d%d", &x, &y);
	int a = (x + y) / 2;
	int b = (x - y) / 2;
	a = a > 0 ? Resverse(a) : -Resverse(-a);
	b = b > 0 ? Resverse(b) : -Resverse(-b);
	printf("%d %d", a + b, a - b);
	return 0;
}

int Resverse(int x)		/// <summary> 将x反转
{
	int resx = 0;
	while (x)
	{
		resx = resx * 10 + x % 10;
		x /= 10;
	}
	return resx;
}*/

//[C067] 20230516
/*
写出正整数的三位分节格式。如，当用户输入82668634时，程序应该输出82,668,634。
输入：正整数;输出：三位分解格式。
样例：82668634 → 82,668,634 。
*/
/* 
	生成结果有误，逻辑也有漏洞，还是按字符串输出！！！

int main()
{
	int x;
	(void)scanf("%d", &x);
	int str[100] ;
	int duanshu = ceil(log10((int)x) / 3.00);
	str[0] = x / pow(1000, (duanshu-1));
	printf("%d", str[0]);
	for (int i = duanshu-1; i > 0; i--)
	{
		str[duanshu - i] = x /(pow(1000.00, (double)(i - 1))) - (x /pow(1000.00, (double)i)*1000);
		printf(",%d", str[duanshu - i]);
	}
	return 0;
}*/
/*
int main()
{
	int n;
	(void)scanf("%d", &n);
	char num[200];

	int i = 0;
	while (n)
	{
		if ((i + 1) % 4 == 0)	 ///加逗号的位置
			num[i++] = ',';
		num[i++] = n % 10 + '0';	 ///数字转字符
		n = n / 10;
	}

	for (int j = i - 1; j >= 0; j--)	 ///倒序输出!!!
		printf("%c", num[j]);
	return 0;
}*/

//[C096] 20230516
/*
输入一个长度不超过 100 的字符串，删除串中的重复字符。
  输入：要检查的字符串，长度不超过100个字符。例如：abacaeedabcdcd。
  输出：删除重复字符后的字符串。例如：abced。*/
/*
int main()
{
	char a[100];
	(void)scanf("%s", &a);
	int an = strlen(a);

	for (int i = 0; i < an; i++)
	{
		for (int j = i + 1; j < an; j++)
		{
			if (a[i] == a[j])
			{
				a[j] = 0;
			}
		}
	}
		for (int i = 0; i < an; i++)
		{
			if (a[i] != 0)
				printf("%c", a[i]);
		}
	return 0;
}*/

//[C064] 20230523
/*
编写一个程序，从键盘上读入一个数字串，把数字转化为对应的小写英语数字单词输出。
例如：输入234，输出two three four。
输入：一串数字
输出：用空格隔开英文数字单词（英文字母都是小写）。
*/
int main()
{
	char num[100];
	(void)scanf("%s", &num);
	int l = strlen(num);

	switch (num[0])
	{
		case '0':printf("zero"); break;
		case '1':printf("one"); break;
		case '2':printf("two"); break;
		case '3':printf("three"); break;
		case '4':printf("four"); break;
		case '5':printf("five"); break;
		case '6':printf("six"); break;
		case '7':printf("seven"); break;
		case '8':printf("eight"); break;
		case '9':printf("nine"); break;
	}

	for (int i = 1; i < l; i++)
	{
		switch (num[i])
		{
			case '0':printf(" zero"); break;		//"山不过来我过去"
			case '1':printf(" one"); break;
			case '2':printf(" two"); break;
			case '3':printf(" three"); break;
			case '4':printf(" four"); break;
			case '5':printf(" five"); break;
			case '6':printf(" six"); break;
			case '7':printf(" seven"); break;
			case '8':printf(" eight"); break;
			case '9':printf(" nine"); break;
		}
	}
	return 0;		
///答案另法：整体建组‌‌
}