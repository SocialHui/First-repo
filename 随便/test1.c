//��������Ϸ
# include <stdio.h>
# include <windows.h>
# include <time.h>

void menu()
{
	printf("#######################\n");
	printf("#   ���������ѡ�� #\n");
	printf("### 1.play   0.exit ###\n");
	printf("######################\n");
}

void game()
{
	int i = 0;
	int ret = rand() % 100 + 1;
	printf("��������µ�����\n");
	while (1)
	{
		scanf_s("%d", &i);
		if (i == ret)
		{
			printf("�¶��ˣ�\n\n");
			break;
		}
		else if (i > ret)
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
	int input = 0;
	while (1)
	{
		menu();
		scanf_s("%d", &input);
		if (input == 0)
		{
			printf("�˳���Ϸ\n");
			break;
		}
		srand((unsigned)time(NULL));   //����һ�����������
		game();
	}
	system("pause");
	return 0;
}