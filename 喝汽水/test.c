# include <stdio.h>
# include <windows.h>

int main()
{
	int money = 0;
	printf("请输入你有多少钱：");
	scanf_s("%d", &money);
	int sum = 0;
	while (money)
	{
		sum += money;
		money /= 2;
	}
	printf("可以喝%d瓶汽水\n", sum);
	system("pause");
	return 0;
}