//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);
//	//int a[] = { 2, 4, 6, 8, 9, 10, 5, 20 }, *q[4], k;
//	//for (k = 0; k < 4; k++)
//	//{
//	//	q[k] = &a[k * 3];
//	//}
//	//printf("%d", q[3][1]);
//	system("pause");
//	return 0;
//}

//下面均为函数调用的方法

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
//# include <stdio.h>
//# include <windows.h>
//
//int PrimeNumber(int i)
//{
//	for (int n = 2; n < i; n++)
//	{
//		if (i%n == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	for (int i = 100; i < 201; i++)
//	{
//		int m = PrimeNumber(i);
//		if (1 == m)
//			printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}

//实现函数判断year是不是润年。
//# include<stdio.h>
//# include <windows.h>
//
//int LeapYear(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int year = 1;
//	for (year=1; year <= 2020; year++)
//	{
//		int m = LeapYear(year);
//		if (m == 1)
//			printf("%d  ", year);
//	}
//	system("pause");
//	return 0;
//}


//实现一个函数来交换两个整数的内容。
//# include <stdio.h>
//# include <windows.h>
//
//void swap(int *a, int *b)
//{
//	int c;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a,&b);
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int i, m = 0, n;
//	printf("请输入一个数字：");
//	scanf_s("%d", &m);
//	for (i = 1; i <= m; i++)
//	{
//		for (n = 1; n <= i; n++)
//		{
//			printf("%d*%d=%d  ", n, i, i*n);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

/*
void List(int m,int n)
{
	for (int i = 1; i <= m; i++)
	{
		for (n = 1; n <= i; n++)
		{
			return n;
		}
		return m;
	}
}


int m = 0;
int n = 0;
printf("请输入两个相同的整数：", m, n);
scanf_s("%d %d", &m, &n);
List(&m, &n);
printf("%d*%d=%d", m, n, m*n);
*/



/*
思路：
1. 设计函数原型，不需要返回值，参数N表示乘法口诀表总共有多少行
2. 设定两个循环，外层循环控制总共有多少行
内层循环控制每行有多少个表达式以及表达式中的内容
*/
void PrintMulTable(int N)
{
	for (int i = 1; i <= N; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("%d*%d=%2d  ", j, i, j*i);
		}
		printf("\n");
	}
}
# include <stdio.h>
# include <windows.h>

int main()
{

	system("pause");
	return 0;
}