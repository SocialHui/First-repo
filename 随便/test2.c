//дһ�����������Ӽ��˳���
//�Ż��汾��ת�Ʊ�
# include<stdio.h>
# include <windows.h>

void menu()
{
	printf("#####################\n");
	printf("###    1.��         2.��     ###\n");
	printf("###    3.��         4.��     ###\n");
	printf("#####################\n");
}

void add(int a, int b)
{
	printf("%d\n\n", a + b);
}

void sub(int a, int b)
{
	printf("%d\n\n", a - b);
}

void mul(int a, int b)
{
	printf("%d\n\n", a*b);
}

//void div(int a, int b)
//{
//	printf("%d\n", a / b);
//}

int main()
{
	int input = 0;
	int a = 0;
	int b = 0;
	void(*arr[5]) (int a, int b) = { 0, add, sub, mul, div };
	do
	{
		menu();
		printf("��������Ҫ���еĲ�����");
		scanf_s("%d", &input);
		if ((input >= 1) && (input <= 4))
		{
			printf("����������������");
			scanf_s("%d %d", &a, &b);
			(*arr[input])(a, b);
		}
	} while (input);
	printf("�˳�����\n");

	system("pause");
	return 0;
}