# include <stdio.h>
# include <windows.h>

int main()
{
	int m = 15;
	int count = 0;
	while (m)
	{
		m = m&(m - 1);
		count++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}