//写一个计算器（加减乘除）
//优化版本（转移表）
# include<stdio.h>
# include <windows.h>

void menu()
{
	printf("#####################\n");
	printf("###    1.加         2.减     ###\n");
	printf("###    3.乘         4.除     ###\n");
	printf("#####################\n");
}

void add(int a, int b)
{
	printf("%d\n\n", a + b);
}

void sub(int a, int b)
{
	printf("%d\n\n", a - b);
}

void mul(int a, int b)
{
	printf("%d\n\n", a*b);
}

//void div(int a, int b)
//{
//	printf("%d\n", a / b);
//}

int main()
{
	int input = 0;
	int a = 0;
	int b = 0;
	void(*arr[5]) (int a, int b) = { 0, add, sub, mul, div };
	do
	{
		menu();
		printf("请输入你要进行的操作：");
		scanf_s("%d", &input);
		if ((input >= 1) && (input <= 4))
		{
			printf("请输入两个整数：");
			scanf_s("%d %d", &a, &b);
			(*arr[input])(a, b);
		}
	} while (input);
	printf("退出程序\n");

	system("pause");
	return 0;
}