////冒泡排序
////升序排列
//# include <stdio.h>
//# include <windows.h>
//
//void show(int arr[], int num)
//{
//	int temp;
//	for (int i = 1; i < num; i++)      //外循环，总共循环次数
//	{
//		for (int j = 0; j < num -i ; j++)      //内循环，将最大的数字放到最后，
//		{
//			if (arr[j]>arr[j + 1])      //大的数字交换到后面
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < num; i++)     //打印排序后的数组
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 8, 7, 6, 5, 4 };
//	int num = sizeof (arr) / sizeof (arr[0]);    //数组元素个数
//	for (int i = 0; i < num; i++)           //先打印原来的数组
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	show(arr, num);
//	system("pause");
//	return 0;
//}



//作业内容
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//# include <stdio.h>
//# include <windows.h>
//
//void Print(int i[], int num)
//{
//	for (int j = 0; j < num; j++)
//	{
//		printf("%d  ", i[j]);
//	}
//	printf("\n");
//}
//
//void show(int i[],int num)
//{
//	int temp;
//	int start = 0;
//	int end = num - 1;
//	int mid = (start + end) / 2;
//	for (start, end; start <= end; start++, end--)
//	{
//		temp = i[start];
//		i[start] = i[end];
//		i[end] = temp;
//	}
//}
//
//int main()
//{
//	int i[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int num = sizeof (i) / sizeof (i[0]);
//	Print(i, num);
//	show(i, num);
//	Print(i, num);
//	system("pause");
//	return 0;
//}


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//# include <stdio.h>
//# include <windows.h>
//
//void show(int arr1[], int arr2[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d  ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d  ", arr2[i]);
//	}
//	printf("\n");
//}
//
//void Exchange(int arr1[], int arr2[], int num)
//{
//	int temp;
//	for (int i = 0; i < num; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	show(arr1, arr2, num);
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 0, 6, 7, 8, 9 };
//	int num = sizeof (arr1) / sizeof (arr1[0]);
//	show(arr1, arr2, num);
//	Exchange(arr1, arr2, num);
//	//show(arr1, arr2, num);
//	system("pause");
//	return 0;
//}

//第二种方法
//#include <stdio.h>
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//
//	printf("请输入10个数字:>");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	printf("请输入10个数字:>");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//交换
//	for (i = 0; i<10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}


//# include<stdio.h>
//# include <windows.h>
//
//int main()
//{
//	system("pause");
//	return 0;
//}


# include <stdio.h>
# include <windows.h>

void Print(int x)
{
	if (x<10)
	{
		printf("%d ", x%10);   
		return;//加上return 相当于结束调用，只打印了一次小于10的值。
	}
	Print(x / 10);      //  这样写相当于没有递归出口，下面的语句一直在执行，
	printf("%d ", x % 10);

	//if (x > 9)
	//{
	//	Print(x / 10);
	//}
	//printf("%d ", x %10);
}

int main()
{
	int x = 1234;
	Print(x);
	system("pause");
	return 0;
}


//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int a = 20;
//	if (a > 18)
//	{
//		printf("成年\n");
//	}
//	printf("未成年\n");
//	system("pause");
//	return 0;
//}