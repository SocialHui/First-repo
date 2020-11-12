//判断一个数是不是素数
# include <stdio.h>
# include <windows.h>

int main()
{
	int n = 11;
	for (n = 1; n < 101; n++)
	{
		int count = 0;
		for (int i = 2; i < n; i++)
		{
			if (n%i == 0)
			{
				count++;
			}
		}
		if (count == 0)
		{
			printf("%d是素数\n", n);
		}
	}
	system("pause");
	return 0;
}