//判断一个函数调用几次
# include <stdio.h>
# include <windows.h>

void hanshu(int *count)
{
	(*count)++;
}

int main()
{
	int count = 0;
	for (int i = 1; i < 10; i++)
	{
		hanshu(&count);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}