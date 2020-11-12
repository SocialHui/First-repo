//计算1!+2!+3!+......+n!
# include <stdio.h>
# include <windows.h>

void Fact(int n)
{
	int num = 0;
	for (int i = n; i > 0; i--)
	{
		int mul = 1;
		for (int j = i; j > 0; j--)
		{
			mul *= j;
		}
		num += mul;
	}
	printf("%d\n", num);
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