# include <stdio.h>
# include <windows.h>
# include <math.h>

void Print(int i)
{
	int count = 0;
	int tmp = i;
	int sum = 0;
	do             //判断这个数字有几位
	{
		tmp /= 10;
		count++;
	} while (tmp);

	tmp = i;
	while (tmp)
	{
		int j = (int)pow(tmp % 10, count);
		sum += j;
		tmp /= 10;
	}

	if (sum == i)     //判断是否是水仙花数
	{
		printf("%d\n", i);
	}

}

int main()
{
	int i = 0;
	for (int i = 0; i < 10000; i++)
	{
		Print(i);
	}
	system("pause");
	return 0;
}