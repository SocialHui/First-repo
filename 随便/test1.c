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


//����ĳ�����ֵĽ׳�
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



//����1��+2��+.......+10!
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


//���������в���ĳ������(���ַ�)
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
//	int end = num - 1;   //��������һ���±�
//	for (start = 0, end = num - 1; start <= end; start++, end--)
//	{
//		int mid = (start + end) / 2;     //��������������м�λ��
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
//			return mid;     //��������������֣��򷵻������±�
//		}
//	}
//	return -1;   //�����������û��������֣��򷵻�-1��
//}
//
//int main()
//{
//	int x = 20;     //��Ҫ�²����ֵ
//	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
//	int num = sizeof (arr) / sizeof(arr[0]);      //��������Ԫ�صĸ���
//	int index = GuessNumber(arr, num,x);     //���ú���
//	printf("������ֵ��±��ǣ�%d\n", index);
//	system("pause");
//	return 0;
//}



//��������Ϸ
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
//	//1.���������
//	//����rand����
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		else if (num > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��С��\n")
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	//����srand����
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//��д���룬��ʾ����ַ����������м���
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
//	///*int num = sizeof (arr) / sizeof (arr1);*/       //�ַ������ȵ���ⲻ��������Ӧ����strlen
//	//int num = strlen(arr);
//	//printf("%s", arr);
//	show();
//	system("pause");
//	return 0;
//}

//for ѭ��ʵ��
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


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
//	if (x > 9)   //�ݹ����
//	{
//		Print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	int x = 1234;
//	Print(x);   //��������
//	system("pause");
//	return 0;
//}


//�ݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
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


//�ǵݹ�ʵ�ֽ׳�
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



//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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
//	int sum = DigitSum(n);//���ú���
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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

//����쳲�������
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1

//�ݹ鷽ʽ
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

////�ǵݹ鷽ʽ
//# include<stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int n = 10;
//	int first = 1;           //��һ��쳲�������
//	int second = 1;     //�ڶ���쳲�������
//	int third = 0;
//	for (n; n > 2; n--)
//	{
//		third = first + second;
//		first = second;
//		second = third;
//	}
//	printf("��ʮ��쳲��������ǣ�%d\n", third);
//	system("pause");
//	return 0;
//}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//# include <stdio.h>
//# include <windows.h>
//
//int  Print(int n)
//{
//	//��ȷ��
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d", n % 10);
//	Sleep(300);
////�����
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


//��д���룬��ʾ����ַ����������м���
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





//��������Ϸ
//# include <stdio.h>
//# include <windows.h>
//# include <time.h>
//
//int menu()
//{
//	int n = 0;
//	printf("###1.play     2.quit###\n");
//	printf("���������ѡ��");
//	scanf_s("%d", &n);
//	return n;
//}
//
//void Game()
//{
//	int m = 0;     //����Ĳµ�����
//	int n = rand() % 100 + 1;     //���ɵ������
//	for (;;)
//	{
//		printf("��������µ�����");
//		scanf_s("%d", &m);
//		if (n == m)
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//		else if (n > m)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�´���\n");
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
//		printf("�ݰ�\n");
//	}
//	else if (1==n)
//	{
//		srand((unsigned)time(NULL));       //����һ�����������
//		Game();
//	}
//	system("pause");
//	return 0;
//}




//дһ��������ÿ����һ������������ͻὫnum��ֵ��1
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



//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//���ַ�������
//�ǵݹ鷽��
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	char arr[] = "abcdefghijklmn";
//	int sum = 0;
//	while (arr[sum])   //��������\0��ʱ������ѭ����
//	{
//		sum++;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//�ݹ鷽��
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
//		return 1 + (len(arr + 1));     //�ݹ����
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefghijklmn";
//	int sum = len(arr);   //���ú���
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}




//�ַ������򣨵ݹ�ʵ�֣�
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
/*
�ݹ鷽ʽ��
2. �Եݹ�ķ�ʽ����Դ�ַ�����ʣ�ಿ�֣�ʣ�ಿ�ֿ��Կ���һ����Ч���ַ������������Ƶķ�ʽ����
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