# include <stdio.h>
# include <windows.h>

int main()
{
	int money = 0;
	printf("���������ж���Ǯ��");
	scanf_s("%d", &money);
	int sum = 0;
	while (money)
	{
		sum += money;
		money /= 2;
	}
	printf("���Ժ�%dƿ��ˮ\n", sum);
	system("pause");
	return 0;
}