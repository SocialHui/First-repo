//# include <stdio.h>
//# include <windows.h>
//
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//
//	//if (n < 10)
//	//{
//	//	printf("%d  ", n % 10);
//	//}
//	//Print(n / 10);
//}
//int main()
//{
//	int n = 1234;
//	Print(n);
//	system("pause");
//	return 0;
//}


//计算某个数字的阶乘
//# include<stdio.h>
//# include <windows.h>
//
//int Fact(int x)
//{
//	int ret = 1;
//	for (int i = x; i >= 1; i--)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int x = 10;
//	int ret = Fact(x);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}



//计算1！+2！+.......+10!
//# include <stdio.h>
//# include <windows.h>
//
//int Num(int x)
//{
//	int sum = 0;
//	for (int i = 1; i <= x; i++)
//	{
//		sum += Fact(i);
//	}
//	return sum;
//}
//
//int Fact(int i)
//{
//	int m = 1;
//	for (int n = i; n >=1; n--)
//	{
//		m *= n;
//	}
//	return m;
//}
//
//int main()
//{
//	int x = 10;
//	int sum = Num(x);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//升序数组中查找某个数字(二分法)
//# include <stdio.h>
//# include <windows.h>
//
//int Number(int arr[], int num,int x)
//{
//	int start = 0;
//	int end = num - 1;
//	for (start = 0, end = num - 1; start <= end; start++, end--)
//	{
//		int mid = (start + end) / 2;
//		if (x > arr[mid])
//			start = mid + 1;
//		else if (x < arr[mid])
//			end = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int x = 50;
//	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
//	int num=sizeof(arr) / sizeof(arr[0]);
//	int index = Number(arr, num,x);
//	printf("%d\n", index);
//	system("pause");
//	return 0;
//}

//# include <stdio.h>
//# include <windows.h>
//
//int GuessNumber(int arr[], int num,int x)   
//{
//	int start = 0;
//	int end = num - 1;   //数组的最后一个下标
//	for (start = 0, end = num - 1; start <= end; start++, end--)
//	{
//		int mid = (start + end) / 2;     //有序排列数组的中间位置
//		if (x > arr[mid])
//		{
//			start = mid + 1;
//		}
//		else if (x < arr[mid])
//		{
//			end = mid - 1;
//		}
//		else
//		{
//			return mid;     //数组中有这个数字，则返回数组下标
//		}
//	}
//	return -1;   //若这个数组中没有这个数字，则返回-1。
//}
//
//int main()
//{
//	int x = 20;     //需要猜测的数值
//	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
//	int num = sizeof (arr) / sizeof(arr[0]);      //数组里面元素的个数
//	int index = GuessNumber(arr, num,x);     //调用函数
//	printf("这个数字的下标是：%d\n", index);
//	system("pause");
//	return 0;
//}



//猜数字游戏
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("********************************\n");
//	printf("*******     1. play      *******\n");
//	printf("*******     0. exit      *******\n");
//	printf("********************************\n");
//}
//
//
//void game()
//{
//	//RAND_MAX-32767
//	//1.生成随机数
//	//讲解rand函数
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n")
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	//讲解srand函数
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//编写代码，演示多个字符从两端向中间汇聚
//# include <stdio.h>
//# include <windows.h>
//# include <string.h>
//
//void show()
//{
//	char arr[] = "##############";
//	char arr1[] = "abcdefghijklmn";
//	int num = strlen(arr);
//	int start = 0;
//	int end = num - 1;
//	while (start <= end)
//	{
//		arr[start] = arr1[start];
//		arr[end] = arr1[end];
//		start++;
//		end--;
//		printf("%s\r", arr);
//		Sleep(2000);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//char arr[] = "##############";
//	//char arr1[] = "abcdefghijklmn";
//	///*int num = sizeof (arr) / sizeof (arr1);*/       //字符串长度的求解不是这样的应该用strlen
//	//int num = strlen(arr);
//	//printf("%s", arr);
//	show();
//	system("pause");
//	return 0;
//}

//for 循环实现
//# include <stdio.h>
//# include <windows.h>
//# include <string.h>
//
//void show()
//{
//	char arr1[] = "abcdefgh ";
//	char arr2[] = "########";
//	int num = strlen(arr2);
//	int start = 0;
//	int end = num - 1;
//	printf("%s\r", arr2);
//	for (start, end; start <= end; start++, end--)
//	{
//		arr2[start] = arr1[start];
//		arr2[end] = arr1[end];
//		printf("%s\r", arr2);
//		Sleep(2000);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//char arr1[] = " abcdefgh ";
//	//char arr2[] = "########";
//	//int num = strlen(arr1);
//	show();
//	system("pause");
//	return 0;
//}


//递归方式实现打印一个整数的每一位
//# include <stdio.h>
//# include <windows.h>
//
//void Print(int x)
//{
//	//if ( x < 10)
//	//{
//	//	printf("%d  ", x%10);
//	//}
//	//printf("%d  ", Print(x/10));
//	if (x > 9)   //递归出口
//	{
//		Print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	int x = 1234;
//	Print(x);   //函数调用
//	system("pause");
//	return 0;
//}


//递归分别实现求n的阶乘（不考虑溢出的问题）
//# include <stdio.h>
//# include <windows.h>
//
//int Fact(int n)
//{
//	if (n > 1)
//	{
//		return n*Fact(n-1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 4;
//	int m=Fact(n);
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//}


//非递归实现阶乘
//# include <stdio.h>
//# include <windows.h>
//
//int Fact(int n)
//{
//	int m = 1;
//	for (int i = n; i >= 1; i--)
//	{
//		m *= i;
//	}
//	return m;
//}
//
//int main()
//{
//	int n = 5;
//	int m = Fact(n);
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//}



//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//# include <stdio.h>
//# include <windows.h>
//
//int DigitSum(int n)
//{
//	//if (n / 10  > 0)
//	//{
//	//	return n % 10 + DigitSum(n / 10);
//	//}
//	if (n>9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 1729;
//	int sum = DigitSum(n);//调用函数
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现。
//# include <stdio.h>
//# include <windows.h>
//
//int Power(int n, int k)
//{
//	if (k > 1)
//	{
//		return n*Power(n, k - 1);
//	}
//	return n;
//}
//
//int main()
//{
//	int n = 4;
//	int k = 3;
//	int m = Power(n, k);
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//}

//计算斐波那契数
//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1

//递归方式
//# include <stdio.h>
//# include <windows.h>
//
//int Number(int n)
//{
//	if (n > 2)
//	{
//		return Number(n-1)+Number(n-2);
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 10;
//	int m = Number(n);
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//}

////非递归方式
//# include<stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int n = 10;
//	int first = 1;           //第一个斐波那契数
//	int second = 1;     //第二个斐波那契数
//	int third = 0;
//	for (n; n > 2; n--)
//	{
//		third = first + second;
//		first = second;
//		second = third;
//	}
//	printf("第十个斐波那契数是：%d\n", third);
//	system("pause");
//	return 0;
//}


//递归方式实现打印一个整数的每一位
//# include <stdio.h>
//# include <windows.h>
//
//int  Print(int n)
//{
//	//正确的
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d", n % 10);
//	Sleep(300);
////错误的
//	//if (n > 9)
//	//{
//	//	printf("%d", Print(n/10));
//	//}
//	//printf ("%d",n) ;
//	//Sleep(1000);
//}
//
//int main()
//{
//	int n = 15684;
//	Print(n);
//	printf("\n");
//	system("pause");
//	return 0;
//}


//编写代码，演示多个字符从两端向中间汇聚
//# include <stdio.h>
//# include <windows.h>
//# include <string.h>
//void show()
//{
//	char arr1[] = "########";
//	char arr2[] = "abcdefgh";
//	int num = strlen(arr1);
//	int start = 0;
//	int end = num - 1;
//	printf("%s\r", arr1);
//	Sleep(1000);
//	for (start, end; start <= end; start++, end--)
//	{
//		arr1[start] = arr2[start];
//		arr1[end] = arr2[end];
//		printf("%s\r", arr1);
//		Sleep(1000);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	show();
//	system("pause");
//	return 0;
//}





//猜数字游戏
//# include <stdio.h>
//# include <windows.h>
//# include <time.h>
//
//int menu()
//{
//	int n = 0;
//	printf("###1.play     2.quit###\n");
//	printf("请输入你的选择：");
//	scanf_s("%d", &n);
//	return n;
//}
//
//void Game()
//{
//	int m = 0;     //输入的猜的数字
//	int n = rand() % 100 + 1;     //生成的随机数
//	for (;;)
//	{
//		printf("请输入你猜的数字");
//		scanf_s("%d", &m);
//		if (n == m)
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//		else if (n > m)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜大了\n");
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	n=menu();
//	if (1 != n)
//	{
//		printf("拜拜\n");
//	}
//	else if (1==n)
//	{
//		srand((unsigned)time(NULL));       //种下一颗随机数种子
//		Game();
//	}
//	system("pause");
//	return 0;
//}




//写一个函数，每调用一次这个函数，就会将num的值加1
//# include <stdio.h>
//# include <windows.h>
//
//void show(int *num)
//{
//	(*num)++;
//}
//
//int main()
//{
//	int num = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		show(&num);
//		printf("%d\n", num);
//	}
//	system("pause");
//	return 0;
//}



//递归和非递归分别实现strlen
//求字符串长度
//非递归方法
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	char arr[] = "abcdefghijklmn";
//	int sum = 0;
//	while (arr[sum])   //当遇到‘\0’时，结束循环。
//	{
//		sum++;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//递归方法
//# include<stdio.h>
//#include <windows.h>
//
//int len(char arr[])
//{
//	int sum=0;
//	if (arr[sum] == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + (len(arr + 1));     //递归调用
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefghijklmn";
//	int sum = len(arr);   //调用函数
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}




//字符串逆序（递归实现）
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
/*
递归方式：
2. 以递归的方式逆置源字符串的剩余部分，剩余部分可以看成一个有效的字符串，再以类似的方式逆置
*/

//# include <stdio.h>
//# include <windows.h>
//
//void reverse_string(char *arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//	int i = 0;
//	/*while (arr[i])
//	{
//		printf("%c ", arr[i]);
//		i++;
//	}*/
//}

//int main()
//{
//	char arr[] = "abcdefghijklmn";
//	int i = 0;
//	while (arr[i])
//	{
//		printf("%c ", arr[i]);
//		i++;
//	}
//	printf("\n");
//	reverse_string(arr);
//	system("pause");
//	return 0;
//}