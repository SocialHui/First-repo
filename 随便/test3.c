//����n�Ľ׳�(���õݹ鷽�������������)
# include <stdio.h>
# include <windows.h>

int Fact(int n)
{
	int mul = 1;
	if (n<2)
	{
		return 1;
	}
	return mul = n*Fact(n - 1);
}

int main()
{
	int n;
	printf("������һ��������");
	scanf_s("%d", &n);
	int mul=Fact(n);
	printf("%d\n", mul);
	system("pause");
	return 0;
}