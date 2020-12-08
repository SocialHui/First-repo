//计算n的阶乘(利用递归方法，不考虑溢出)
# include <stdio.h>
# include <windows.h>

int Fact(int n)
{
	int mul = 1;
	if (n<2)
	{
		return 1;
	}
	return mul = n*Fact(n - 1);
}

int main()
{
	int n;
	printf("请输入一个整数：");
	scanf_s("%d", &n);
	int mul=Fact(n);
	printf("%d\n", mul);
	system("pause");
	return 0;
}