//����n�Ľ׳�
# include <stdio.h>
# include <windows.h>

void Fact(int n)
{
	int mul = 1;
	for (n; n > 0; n--)
	{
		mul *= n;
	}
	printf("%d\n", mul);
}

int main()
{
	int n;
	printf("������һ��������");
	scanf_s("%d", &n);
	Fact(n);
	system("pause");
	return 0;
}