//qsort函数的实现
//无类型排序

# include <stdio.h>
# include <windows.h>

int intsort(const void *p1, const void *p2)
{
	if (*(float *)p1 > *(float *)p2)     //浮点数不能比较相等，但是可以比较大小
	{
		return 1;          //这样是升序排列，返回-1是降序排列
	}
	if (*(float *)p1 < *(float *)p2)
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
	float arr[] = { 1, 3, 5, 8, 7, 9, 6 };
	int num = sizeof (arr) / sizeof (arr[0]);
	qsort(arr, num, sizeof (float), intsort);
	system("pause");
	return 0;
}