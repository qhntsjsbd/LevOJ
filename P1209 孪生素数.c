#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int prime_number(int);

int main()
{
	int m;
	while (scanf("%d", &m) != EOF)
	{
		int i;
		for (i = m-2; i > 0; i--)//输出的两个都是要小于等于m的，原作者的代码（i=m。。。有误，例如m=17时，原作者代码将输出17 19，与题意不符合
		{
			if (prime_number(i) == 1 && prime_number(i + 2) == 1)
			{
				printf("%d %d\n", i, i + 2);
				break;
			}
		}
	}
	return 0;
}

int prime_number(int n)
{
	int i;
	int t = 1;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			t = 0;
	}
	return t;
}
