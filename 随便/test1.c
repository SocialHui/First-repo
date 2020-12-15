//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18){
//		printf("未成年\n");
//	}
//	system ("pause");
//	return 0;
//}


//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18){
//		printf("未成年\n");
//	}
//	else {
//		printf("成年\n");
//	}
//	system("pause");
//	return 0;
//}


//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if (age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age < 50)
//	{
//		printf("中年\n");
//	}
//	else
//	{
//		printf("老年\n");
//	}
//	system("pause");
//	return 0;
//}


//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)   //圆括号中判定真假
//	{
//	    case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("周内\n");
//			break;    //实现分支功能，跳出所在switch。
//		case 6:
//		case 7:
//			printf("周末\n");
//			break;
//		default :    //上面都不满足是执行这一句。
//			printf("请输入1~7\n");
//			break;
//	}
//	system("pause");
//	return 0;
//}

//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}

//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i = i + 1;
//	}
//	system("pause");
//	return 0;
//}


//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	//int ch;
//	getchar();
//	system ("pause");
//	return 0;
//}

//打印1~100中3的倍数
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}


//将三个数从大到小排列
//第一种方法
//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	scanf("%d %d %d", &a, &b, &c);
//	if (b > a)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (c > a)
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b > c)
//	{
//		d = b;
//		b= c;
//		c = d;
//	}
//	printf("%d,%d,%d", a, b, c);
//	system("pause");
//	return 0;
//}


//求两个数的最大公约数
//1.能被4整除但是不能被100整除
//2.能被400整除
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int year = 1000;
//	for (; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//			printf("%d	", year);
//	}
//	system("pause");
//	return 0;
//}


//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int i = 1;
//	do {
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);   //while语句后面一定要有“；”
//	system("pause");
//	return 0;
//}


//打印100~200之间的素数
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int n;
//	int i = 100;
//	int d = 2;
//	for (i = 100; i <= 200; i++)
//	{
//		n = 1;
//		for (d = 2; d < i; d++)
//		{
//			if (i%d == 0)   //余数为0代表不是素数
//			{
//				n = 0;
//				break;
//			}
//		}
//		if (n == 1)    //成立则为素数
//			printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}




//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//第一种方法
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int m;
//	int n;
//	for (i = 1; i < 100; i++){
//		m = i / 10;   //十位的数字
//		if (m == 9)
//			sum++;
//		n = i - m * 10;  //个位的数字
//		if (n == 9)
//			sum++;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//第二种方法
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int i;
//	int sum=0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i / 10 == 9)
//			sum++;
//		if (i % 10 == 9)
//			sum++;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//比较输出十个数中的最大值
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int arr[10] = { 20, 18, 30, 8,65,6, 7, 5, 3, 12 };
//	int a;
//	int i;
//	for (i = 0; i < 10; i++){
//		for (a = i+1; a < 10; a++){
//			if (arr[i] < arr[a])
//				break;
//		}
//		if (a == 10){
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//第二种方法
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 1;
//	int max = 0;
//	printf("请输入十个整数\n");
//	for (i = 0; i < 10; i++){
//		scanf_s("%d", &arr[i]);   //依次输入十个数字
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++){
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}


//打印乘法口诀表
//第一种方法
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int i = 1;
//	int n = 1;
//	for (i = 1; i<10;i++)
//	{
//		printf("%d*%d=%d	", i, n,i*n);
//		if (i == 9)
//		{
//			printf("\n");
//			i = 0;
//			n++;
//			if (n == 10)
//				break;
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//第二种方法
//两个循环进行控制
//外层循环控制打印多少行
//内部循环控制每行打印多少个表达式以及表达式内容，
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int m = 1;
//	int n = 1;
//	for (n = 1; n < 10; n++)  //控制行数
//	{
//		for (m = 1; m <= n; m++)   //控制列数
//		{
//			printf("%d*%d=%d	", m, n, n*m);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//计算1/1+1/2+1/3+1/4+1/5 …… + 1/99 + 1/100 的值，打印出结果
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	double sum = 0.0;
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i);   //结果为小数形式，所以应该为1.0，否则1/整数结果任然是整数。
//	}
//	printf("%lf\n", sum);   //输出不是整数形式，是小数形式，所以应该是“%lf”
//	system("pause");
//	return 0;
//}



//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	double sum = 0.0;
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//			if (i % 2)
//				sum = sum + (1.0 / i);
//			else
//				sum = sum - (1.0 / i);
//			//if (i % 2 == 0)
//			//{
//			//	i = -i;
//			//}
//			//sum = sum + (1.0 / i);
//			//if (i < 0)
//			//{
//			//	i = -i;
//			//}
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}



//两个数的最大公约数
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int a;
//	int b;
//	int i;
//	int n;
//	printf("请输入两个整数\n");
//	scanf_s("%d %d", &a, &b);
//	if (a > b)
//		n = b;
//	n = a;
//	for (i = n; i > 0; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("最大公约数为%d\n", i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}


//求两个数的较大值输出
//用函数调用的方法
//# include<stdio.h>
//# include <windows.h>
//
//int func (int a1, int a2) //a1,a2为形式参数
//{
//	if (a1 > a2)
//		return a1;
//	return a2;
//}
//int main()
//{
//	int a;
//	int b;
//	int max;
//	printf("请输入两个数字：\n");
//	scanf_s("%d %d", &a, &b);
//	max = func(a, b);       //调用函数，a，b为实参
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}

//输出两个数的较大值
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int a;
//	int b;
//	printf("请输入两个整数：\n");
//	scanf_s("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("max=%d\n", a);
//	}
//	else
//	{
//		printf("max=%d\n", b);
//	}
//	system("pause");
//	return 0;
//}



//完成上课的猜数字游戏
# include <stdio.h>
# include <windows.h>

int main()
{
	int a;
	int i = 0;
	printf("请输入一个1~100之间的整数\n");
	scanf_s("%d", &a);
	for (i = 0; ; i++)
	{
		if ()
	}
	system("pause");
	return 0;
}

//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。