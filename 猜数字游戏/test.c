# include <stdio.h>
# include <windows.h>
# include <time.h>

void menu()
{
	printf("##�������ѡ�� ####\n");
	printf("#########################\n");
	printf("##   1.��      0.����  #####\n");
	printf("#########################\n");
}

void game()
{
	int n = 0;
	int num = rand() % 100 + 1;      //���������
	printf("��������µ����֣� \n");
	while (1)
	{
		scanf_s("%d", &n);
		if (num == n)
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
		else if (n > num)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��С��\n");
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));   //����һ�����������
	int n = 0;
	do
	{
		menu();
		scanf_s("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�ݰݣ�");
			break;
		default:
			printf("��������ȷ��ѡ�\n");
			break;
		}
	} while(n);
	system("pause");
	return 0;
}