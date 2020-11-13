//使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组
# include <stdio.h>
# include <windows.h>

void Print(int *arr, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num = sizeof (arr) / sizeof (arr[0]);
	Print(arr, num);
	system("pause");
	return 0;
}