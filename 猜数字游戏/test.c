# include <stdio.h>
# include <windows.h>
# include <time.h>

void menu()
{
	printf("##输入你的选择： ####\n");
	printf("#########################\n");
	printf("##   1.玩      0.不玩  #####\n");
	printf("#########################\n");
}

void game()
{
	int n = 0;
	int num = rand() % 100 + 1;      //生成随机数
	printf("请输入你猜的数字： \n");
	while (1)
	{
		scanf_s("%d", &n);
		if (num == n)
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
		else if (n > num)
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
	srand((unsigned)time(NULL));   //种下一颗随机数种子
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
			printf("拜拜！");
			break;
		default:
			printf("请输入正确的选项：\n");
			break;
		}
	} while(n);
	system("pause");
	return 0;
}