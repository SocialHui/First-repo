//дһ�����������Ӽ��˳���
//�򵥰汾
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
	printf("%d\n", a + b);
}

void sub(int a, int b)
{
	printf("%d\n", a - b);
}

void mul(int a, int b)
{
	printf("%d\n", a*b);
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
	do
	{
		menu();
		printf("��������Ҫ���еĲ�����\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ҫ��������֣�\n");
			scanf_s("%d %d", &a, &b);
			add(a, b);
			break;
		case 2:
			printf("��������Ҫ��������֣�\n");
			scanf_s("%d %d", &a, &b);
			sub(a, b);
			break;
		case 3:
			printf("��������Ҫ��������֣�\n");
			scanf_s("%d %d", &a, &b);
			mul(a, b);
			break;
		case 4:
			printf("��������Ҫ��������֣�\n");
			scanf_s("%d %d", &a, &b);
			div(a, b);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("��������ȷ��ѡ��\n");
			break;
		}
	} while (input);
	
	system("pause");
	return 0;
}