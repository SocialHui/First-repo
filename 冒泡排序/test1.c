# include <stdio.h>
# include <windows.h>

void Show(int str[], int num)
{
	for (int i = 0; i < num; i++)  
	{
		printf("%d ", str[i]);
	}
	printf("\n");
}

void Sort(int str[], int num)
{
	for (int i = 0; i < num; i++)    
	{
		int count = 0;
		//一轮冒泡中没有发生一次交换，证明原数组有序
		for (int j = 0; j < num - i - 1; j++)
		{
			if (str[j]>str[j + 1])
			{
				int a = str[j];
				str[j] = str[j + 1];
				str[j + 1] = a;
				count++;
			}
		}
		if (count == 0)     //代表数组本来有序，不需要进行下面的排序，直接退出两个循环
		{
			break;
		}
	}
}

int main()
{
	int str[] = { 1, 2, 6, 5, 8, 9, 4, 7, 3 };
	int num = sizeof (str) / sizeof (str[0]);      //计算数组元素个数
	Show(str, num);    //排序前数组打印
	Sort(str, num);      //升序排序
	Show(str, num);   //排序后数组打印
	system("pause");
	return 0;
}
