//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
/*
思路：
1. 给定两个下标left和right，left放在数组的起始位置，right放在数组中最后一个元素的位置
2. 循环进行一下操作
a. 如果left和right表示的区间[left, right]有效，进行b，否则结束循环
b. left从前往后找，找到一个偶数后停止
c. right从后往前找，找到一个奇数后停止
d. 如果left和right都找到了对应的数据，则交换，继续a，
*/

# include <stdio.h>
# include <windows.h>

void Exchange(int *arr, int size)
{
	int tmp = 0;
	int left = 0;
	int right = size - 1;

	while (left < right)
	{
		// 从前往后，找到一个偶数，找到后停止
		while ((left < right) && (arr[left] % 2 == 0))
		{
			left++;
		}

		// 从后往前找，找一个奇数，找到后停止
		while ((left < right) && (arr[right] % 2 ==1))
		{
			right--;
		}

		// 如果偶数和奇数都找到，交换这两个数据的位置
	    // 然后继续找，直到两个指针相遇
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}

	}
}

void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1, 2, 6, 5, 4, 8, 9, 0 };
	int size = sizeof (arr) / sizeof (arr[0]);
	Print(arr, size);
	Exchange(arr, size);
	Print(arr, size);
	system("pause");
	return 0;
}