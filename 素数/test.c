//�ж�һ�����ǲ�������
# include <stdio.h>
# include <windows.h>

int main()
{
	int n = 11;
	for (n = 1; n < 101; n++)
	{
		int count = 0;
		for (int i = 2; i < n; i++)
		{
			if (n%i == 0)
			{
				count++;
			}
		}
		if (count == 0)
		{
			printf("%d������\n", n);
		}
	}
	system("pause");
	return 0;
}