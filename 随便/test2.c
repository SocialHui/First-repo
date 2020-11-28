//求两个数的最小公倍数
# include <stdio.h>
# include <windows.h>

int Search(int a, int b)
{
	int c = a > b ? a : b;
	while ((c%a != 0) || (c%b!=0))
	{
		c++;
	}
	return c;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数：");
	scanf_s("%d %d", &a, &b);
	int num = Search(a, b);
	printf("%d\n", num);
	system("pause");
	return 0;
}