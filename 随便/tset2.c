//��ӡ����
# include <stdio.h>
# include <windows.h>

void Print(int i)
{
	int j = 1;
	int k = 1;
	for (j = 1; j <= i; j++)
	{
		if (j <= i / 2 + 1)         //��ӡ�ϰ벿��
		{
			for (k = 1; k <= i; k++)
			{
				if (k > i - (j + /*3  i=7��ʱ��*/4) && k < /*i + j - 3*/14 - i + j)  //��Ҫ�ı����У�ֻ��Ҫ��һ�����������
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		else         //��ӡ�°벿��
		{
			for (k = 1; k <= i; k++)
			{
				if (k > j - /*4*/5 && k < /*i - j + 5*/15 - j)    //��Ҫ�ı����У�ֻ��Ҫ��һ�����������
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}


	/*for (int j = 1; j <= i; j++)     //ֻ��ӡ�ϰ벿��
	{
	for (int k = 1; k <= i; k++)
	{
	if (k > i - (j + 3) && k < i + j - 3)
	{
	printf("*");
	}
	else
	{
	printf(" ");
	}
	}
	printf("\n");
	}*/
}

int main()
{
	int i = 9;
	Print(i);
	system("pause");
	return 0;
}

/*
˼·��
��ϸ�۲�ͼ�Σ����Է��֣���ͼ�������ɿո��*���ղ�ͬ�����������ɵġ�
�����ǣ�������ո񣬺����*��ÿ����
�ո񣺴������£�һ�м���һ��
*��2*i+1�ķ�ʽ����
�����ǣ�������ո񣬺����*��ÿ����
�ո񣺴������£�ÿ�ж�һ���ո�
*�� �������£�����2*(line-1-i)-1�ķ�ʽ���٣����У�line��ʾ�ܹ��ж�����
����������ʽ���������Ǻ��������еĿո��*�ֱ�������ɡ�
*/
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϰ벿��
//	for (i = 0; i<line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j<line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j<2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//��ӡ�°벿��
//	for (i = 0; i<line - 1; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//��ӡˮ�ɻ���
//# include<stdio.h>
//# include <windows.h>
//# include <math.h>
//
//void Flower(int i)
//{
//	int sum = 0;
//	int count = 0;
//	int k = i;
//	int j = k;
//	while (k)
//	{
//		k /= 10;
//		count++;
//	}
//	while (j)
//	{
//		double n = j % 10;
//		sum = sum + pow(n, count);
//		j /= 10;
//	}
//	if (sum == i)
//	{
//		printf("%d\n", i);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i; i < 100000; i++)
//	{
//		Flower(i);
//	}
//	system("pause");
//	return 0;
//}


//# include<stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int i = 20;
//	int sum = 20;
//	while (i > 1)
//	{
//		i /= 2;
//		sum += i;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

/*
˼·��
1. 20Ԫ���ȿ��Ժ�20ƿ����ʱ������20����ƿ��
2. ������ƿ�ӿ��Ժ�һƿ������֮�󣬿�ƿ��ʣ�ࣺempty/2(������ƿ�ӻ��ĺ���������ƿ��) + empty%2(��������ƿ��)
3. ���ƿ�Ӹ�������1�������Լ����������ظ�2
*/
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//����1
//	total = money;
//	empty = money;
//	while (empty>1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//
//	return 0;
//}
//
//
//// ������������������ˮ����ƿ�ӻ��Ĺ���Ļ������Է��֣���ʵ���Ǹ��Ȳ����У�money*2-1
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//����2
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//
//	return 0;
//}