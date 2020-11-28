//在有序数组中查找某个具体的数字n
# include <stdio.h>
# include <windows.h>

int Search(int *arr, int num,int n)
{
	int start = 0;
	int end = num - 1;
	int mid = (start + end / 2);
	while (n != arr[mid])
	{
		if (n > arr[mid])
		{
			start = mid;
		}
		else
		{
			end = mid;
		}
		mid = (start + end / 2);
	}
	return mid;
}

int main()
{
	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	int num = sizeof (arr) / sizeof (arr[0]);
	int n = 0;
	printf("请输入数字：");
	scanf_s("%d", &n);
	int sub = Search(arr, num,n);
	printf("这个数字在数组中的下标为：%d\n", sub);
	system("pause");
	return 0;
}