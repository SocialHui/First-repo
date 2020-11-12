//计算n的阶乘
# include <stdio.h>
# include <windows.h>

void Fact(int n)
{
	int mul = 1;
	for (n; n > 0; n--)
	{
		mul *= n;
	}
	printf("%d\n", mul);
}

int main()
{
	int n;
	printf("请输入一个整数：");
	scanf_s("%d", &n);
	Fact(n);
	system("pause");
	return 0;
}