//猜数字游戏
# include <stdio.h>
# include <windows.h>
# include <time.h>

void menu()
{
	printf("#######################\n");
	printf("#   请输入你的选择： #\n");
	printf("### 1.play   0.exit ###\n");
	printf("######################\n");
}

void game()
{
	int i = 0;
	int ret = rand() % 100 + 1;
	printf("请输入你猜的数字\n");
	while (1)
	{
		scanf_s("%d", &i);
		if (i == ret)
		{
			printf("猜对了！\n\n");
			break;
		}
		else if (i > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜小了\n");
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
			printf("退出游戏\n");
			break;
		}
		srand((unsigned)time(NULL));   //生成一个随机数种子
		game();
	}
	system("pause");
	return 0;
}