//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18){
//		printf("δ����\n");
//	}
//	system ("pause");
//	return 0;
//}


//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18){
//		printf("δ����\n");
//	}
//	else {
//		printf("����\n");
//	}
//	system("pause");
//	return 0;
//}


//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else if (age < 30)
//	{
//		printf("����\n");
//	}
//	else if (age < 50)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	system("pause");
//	return 0;
//}


//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)   //Բ�������ж����
//	{
//	    case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("����\n");
//			break;    //ʵ�ַ�֧���ܣ���������switch��
//		case 6:
//		case 7:
//			printf("��ĩ\n");
//			break;
//		default :    //���涼��������ִ����һ�䡣
//			printf("������1~7\n");
//			break;
//	}
//	system("pause");
//	return 0;
//}

//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}

//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i = i + 1;
//	}
//	system("pause");
//	return 0;
//}


//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	//int ch;
//	getchar();
//	system ("pause");
//	return 0;
//}

//��ӡ1~100��3�ı���
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}


//���������Ӵ�С����
//��һ�ַ���
//# include <stdio.h>
//# include <windows.h>
//# pragma warning (disable:4996)
//
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	scanf("%d %d %d", &a, &b, &c);
//	if (b > a)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (c > a)
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b > c)
//	{
//		d = b;
//		b= c;
//		c = d;
//	}
//	printf("%d,%d,%d", a, b, c);
//	system("pause");
//	return 0;
//}


//�������������Լ��
//1.�ܱ�4�������ǲ��ܱ�100����
//2.�ܱ�400����
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int year = 1000;
//	for (; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//			printf("%d	", year);
//	}
//	system("pause");
//	return 0;
//}


//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int i = 1;
//	do {
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);   //while������һ��Ҫ�С�����
//	system("pause");
//	return 0;
//}


//��ӡ100~200֮�������
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int n;
//	int i = 100;
//	int d = 2;
//	for (i = 100; i <= 200; i++)
//	{
//		n = 1;
//		for (d = 2; d < i; d++)
//		{
//			if (i%d == 0)   //����Ϊ0����������
//			{
//				n = 0;
//				break;
//			}
//		}
//		if (n == 1)    //������Ϊ����
//			printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}




//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//��һ�ַ���
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int m;
//	int n;
//	for (i = 1; i < 100; i++){
//		m = i / 10;   //ʮλ������
//		if (m == 9)
//			sum++;
//		n = i - m * 10;  //��λ������
//		if (n == 9)
//			sum++;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//�ڶ��ַ���
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int i;
//	int sum=0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i / 10 == 9)
//			sum++;
//		if (i % 10 == 9)
//			sum++;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//�Ƚ����ʮ�����е����ֵ
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	int arr[10] = { 20, 18, 30, 8,65,6, 7, 5, 3, 12 };
//	int a;
//	int i;
//	for (i = 0; i < 10; i++){
//		for (a = i+1; a < 10; a++){
//			if (arr[i] < arr[a])
//				break;
//		}
//		if (a == 10){
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//�ڶ��ַ���
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 1;
//	int max = 0;
//	printf("������ʮ������\n");
//	for (i = 0; i < 10; i++){
//		scanf_s("%d", &arr[i]);   //��������ʮ������
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++){
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}


//��ӡ�˷��ھ���
//��һ�ַ���
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int i = 1;
//	int n = 1;
//	for (i = 1; i<10;i++)
//	{
//		printf("%d*%d=%d	", i, n,i*n);
//		if (i == 9)
//		{
//			printf("\n");
//			i = 0;
//			n++;
//			if (n == 10)
//				break;
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//�ڶ��ַ���
//����ѭ�����п���
//���ѭ�����ƴ�ӡ������
//�ڲ�ѭ������ÿ�д�ӡ���ٸ����ʽ�Լ����ʽ���ݣ�
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int m = 1;
//	int n = 1;
//	for (n = 1; n < 10; n++)  //��������
//	{
//		for (m = 1; m <= n; m++)   //��������
//		{
//			printf("%d*%d=%d	", m, n, n*m);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//����1/1+1/2+1/3+1/4+1/5 ���� + 1/99 + 1/100 ��ֵ����ӡ�����
//# include <stdio.h>
//# include <windows.h>
//
//int main()
//{
//	double sum = 0.0;
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i);   //���ΪС����ʽ������Ӧ��Ϊ1.0������1/���������Ȼ��������
//	}
//	printf("%lf\n", sum);   //�������������ʽ����С����ʽ������Ӧ���ǡ�%lf��
//	system("pause");
//	return 0;
//}



//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	double sum = 0.0;
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//			if (i % 2)
//				sum = sum + (1.0 / i);
//			else
//				sum = sum - (1.0 / i);
//			//if (i % 2 == 0)
//			//{
//			//	i = -i;
//			//}
//			//sum = sum + (1.0 / i);
//			//if (i < 0)
//			//{
//			//	i = -i;
//			//}
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}



//�����������Լ��
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int a;
//	int b;
//	int i;
//	int n;
//	printf("��������������\n");
//	scanf_s("%d %d", &a, &b);
//	if (a > b)
//		n = b;
//	n = a;
//	for (i = n; i > 0; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("���Լ��Ϊ%d\n", i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}


//���������Ľϴ�ֵ���
//�ú������õķ���
//# include<stdio.h>
//# include <windows.h>
//
//int func (int a1, int a2) //a1,a2Ϊ��ʽ����
//{
//	if (a1 > a2)
//		return a1;
//	return a2;
//}
//int main()
//{
//	int a;
//	int b;
//	int max;
//	printf("�������������֣�\n");
//	scanf_s("%d %d", &a, &b);
//	max = func(a, b);       //���ú�����a��bΪʵ��
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}

//����������Ľϴ�ֵ
//# include <stdio.h>
//# include <windows.h>
//int main()
//{
//	int a;
//	int b;
//	printf("����������������\n");
//	scanf_s("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("max=%d\n", a);
//	}
//	else
//	{
//		printf("max=%d\n", b);
//	}
//	system("pause");
//	return 0;
//}



//����ϿεĲ�������Ϸ
# include <stdio.h>
# include <windows.h>

int main()
{
	int a;
	int i = 0;
	printf("������һ��1~100֮�������\n");
	scanf_s("%d", &a);
	for (i = 0; ; i++)
	{
		if ()
	}
	system("pause");
	return 0;
}

//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����