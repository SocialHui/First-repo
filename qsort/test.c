//qsort函数的实现
//无类型排序

# include <stdio.h>
# include <windows.h>

int intsort(const void *p1, const void *p2)
{
	if (*(int *)p1 > *(int *)p2)
	{
		return 1;
	}
	if (*(int *)p1 < *(int *)p2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int arr[] = { 1, 3, 5, 8, 7, 9, 6 };
	int num = sizeof (arr) / sizeof (arr[0]);
	qsort(arr, num, sizeof (int), intsort);
	system("pause");
	return 0;
}