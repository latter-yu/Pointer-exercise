#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	int tmp;
	printf("请输入一个数字:>");
	scanf("%d", &num);
	printf("奇数位为：");
	for (i = 31; i >= 0; i = i - 2)//也是控制32次（每个整型数按32位来算），只是从31位开始移动
	{
		tmp = (num >> i) & 1;//第一次向右移动31位和1与得到第一位情况，每次变化2位，即可得到奇数位情况
		printf("%d ", tmp);
	}
	printf("\n");
	printf("偶数位为：");
	for (i = 30; i >= 0; i = i - 2)//向右移动30位，再与1所得结果是原来数字的第二位，再移28位
	{
		tmp = (num >> i) & 1;
		printf("%d ", tmp);
	}
	printf("\n");
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int num1 = 0;
	int num2 = 0;
	int tmp1, tmp2;
	printf("请输入两个数字:>");
	scanf("%d %d", &num1, &num2);
	for (i = 31; i >= 0; i = i - 1)
	{
		tmp1 = (num1 >> i) & 1;
		printf("%d ", tmp1);
	}
	printf("\n");
	for (j = 31; j >= 0; j = j - 1)
	{
		tmp2 = (num2 >> j) & 1;
		printf("%d ", tmp2);
	}
	printf("\n");
	return 0;
}

#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int count = 0;
	printf("请输入两个数字:>");
	scanf("%d %d", &num1, &num2);
	int ret = num1^num2;
	while (ret)
	{
		ret = ret&(ret - 1);
		count++;
	}
	//将两数异或在一起，求这个数二进制中1的个数
	printf("count=%d\n", count);
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int a = 0x11223344;
	char *pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}

#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	short *p = (short*)arr;
	int i = 0;
	for (i = 0; i<4; i++)
	{
		*(p + i) = 0;
	}
	for (i = 0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
