////ð������
////��������
//# include <stdio.h>
//# include <windows.h>
//
//void show(int arr[], int num)
//{
//	int temp;
//	for (int i = 1; i < num; i++)      //��ѭ�����ܹ�ѭ������
//	{
//		for (int j = 0; j < num -i ; j++)      //��ѭ�������������ַŵ����
//		{
//			if (arr[j]>arr[j + 1])      //������ֽ���������
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < num; i++)     //��ӡ����������
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 8, 7, 6, 5, 4 };
//	int num = sizeof (arr) / sizeof (arr[0]);    //����Ԫ�ظ���
//	for (int i = 0; i < num; i++)           //�ȴ�ӡԭ��������
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	show(arr, num);
//	system("pause");
//	return 0;
//}



//��ҵ����
//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
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

//�ڶ��ַ���
//#include <stdio.h>
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//
//	printf("������10������:>");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	printf("������10������:>");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//����
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
		return;//����return �൱�ڽ������ã�ֻ��ӡ��һ��С��10��ֵ��
	}
	Print(x / 10);      //  ����д�൱��û�еݹ���ڣ���������һֱ��ִ�У�
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
//		printf("����\n");
//	}
//	printf("δ����\n");
//	system("pause");
//	return 0;
//}