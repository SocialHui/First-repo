//����1��+2��+.....+n!�����õݹ鷽����
# include <stdio.h>
# include <windows.h>

int  Fact(int n)
{
	int sum = 0;
	for (n; n >= 1; n--)
	{
		if (n < 2)
		{
			return 1;
		}
		sum += n*Fact(n - 1);
	}
	return sum;
}
int main()
{
	int n;
	printf("������һ��������");
	scanf_s("%d", &n);
	int sum = Fact(n);
	printf("%d\n",sum);
	system("pause");
	return 0;
}