//打印菱形
# include <stdio.h>
# include <windows.h>

void Print(int i)
{
	int j = 1;
	int k = 1;
	for (j = 1; j <= i; j++)
	{
		if (j <= i / 2 + 1)         //打印上半部分
		{
			for (k = 1; k <= i; k++)
			{
				if (k > i - (j + /*3  i=7的时候*/4) && k < /*i + j - 3*/14 - i + j)  //若要改变行列，只需要改一下这里的条件
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		else         //打印下半部分
		{
			for (k = 1; k <= i; k++)
			{
				if (k > j - /*4*/5 && k < /*i - j + 5*/15 - j)    //若要改变行列，只需要改一下这里的条件
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}


	/*for (int j = 1; j <= i; j++)     //只打印上半部分
	{
	for (int k = 1; k <= i; k++)
	{
	if (k > i - (j + 3) && k < i + j - 3)
	{
	printf("*");
	}
	else
	{
	printf(" ");
	}
	}
	printf("\n");
	}*/
}

int main()
{
	int i = 9;
	Print(i);
	system("pause");
	return 0;
}

/*
思路：
仔细观察图形，可以发现，此图形中是由空格和*按照不同个数的输出组成的。
上三角：先输出空格，后输出*，每行中
空格：从上往下，一行减少一个
*：2*i+1的方式递增
下三角：先输出空格，后输出*，每行中
空格：从上往下，每行多一个空格
*： 从上往下，按照2*(line-1-i)-1的方式减少，其中：line表示总共有多少行
按照上述方式，将上三角和下三角中的空格和*分别输出即可。
*/
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	for (i = 0; i<line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j<line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j<2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//打印下半部分
//	for (i = 0; i<line - 1; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//打印水仙花数
//# include<stdio.h>
//# include <windows.h>
//# include <math.h>
//
//void Flower(int i)
//{
//	int sum = 0;
//	int count = 0;
//	int k = i;
//	int j = k;
//	while (k)
//	{
//		k /= 10;
//		count++;
//	}
//	while (j)
//	{
//		double n = j % 10;
//		sum = sum + pow(n, count);
//		j /= 10;
//	}
//	if (sum == i)
//	{
//		printf("%d\n", i);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i; i < 100000; i++)
//	{
//		Flower(i);
//	}
//	system("pause");
//	return 0;
//}


//# include<stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int i = 20;
//	int sum = 20;
//	while (i > 1)
//	{
//		i /= 2;
//		sum += i;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

/*
思路：
1. 20元首先可以喝20瓶，此时手中有20个空瓶子
2. 两个空瓶子可以喝一瓶，喝完之后，空瓶子剩余：empty/2(两个空瓶子换的喝完后产生的瓶子) + empty%2(不够换的瓶子)
3. 如果瓶子个数超过1个，可以继续换，即重复2
*/
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty>1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//
//	return 0;
//}
//
//
//// 方法二：按照上述喝水和用瓶子换的规则的话，可以发现，其实就是个等差数列：money*2-1
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法2
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//
//	return 0;
//}