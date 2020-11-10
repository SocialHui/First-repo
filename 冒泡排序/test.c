# include <stdio.h>
# include <windows.h>

void Sort(int str[], int num)
{
	int a = 0;
	for (int i = 0; i < num; i++)       //交换程序
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (str[j]>str[j + 1])
			{
				a = str[j];
				str[j] = str[j + 1];
				str[j + 1] = a;
			}
		}
	}

	for (int k = 0; k < num; k++)    //打印冒泡交换后的数组
	{
		printf("%d ", str[k]);
	}
	printf("\n");
}

int main()
{
	int str[] = { 1, 2, 6, 5, 8, 9, 4, 7, 3 };
	int num = sizeof (str) / sizeof (str[0]);      //计算数组元素个数

	for (int i = 0; i < num; i++)     //打印冒泡交换前的数组
	{
		printf("%d ", str[i]);
	}
	printf("\n");

	Sort(str, num);
	system("pause");
	return 0;
}