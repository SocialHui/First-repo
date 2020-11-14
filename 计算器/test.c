//写一个计算器（加减乘除）
//简单版本
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
	printf("%d\n", a + b);
}

void sub(int a, int b)
{
	printf("%d\n", a - b);
}

void mul(int a, int b)
{
	printf("%d\n", a*b);
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
	do
	{
		menu();
		printf("请输入你要进行的操作：\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入你要计算的数字：\n");
			scanf_s("%d %d", &a, &b);
			add(a, b);
			break;
		case 2:
			printf("请输入你要计算的数字：\n");
			scanf_s("%d %d", &a, &b);
			sub(a, b);
			break;
		case 3:
			printf("请输入你要计算的数字：\n");
			scanf_s("%d %d", &a, &b);
			mul(a, b);
			break;
		case 4:
			printf("请输入你要计算的数字：\n");
			scanf_s("%d %d", &a, &b);
			div(a, b);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("请输入正确的选项\n");
			break;
		}
	} while (input);
	
	system("pause");
	return 0;
}