# include <stdio.h>
# include <windows.h>

void Sort(int *arr, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void Print(int *arr, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1, 8, 6, 9, 4, 7, 2, 3, 5, 6 };
	int num = sizeof(arr) / sizeof (arr[0]);
	Print(arr, num);
	Sort(arr,num);
	Print(arr, num);
	system("pause");
	return 0;
}