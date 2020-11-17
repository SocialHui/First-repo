//计算求和
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
# include <stdio.h>
# include <windows.h>

int Sum_1(int a,int b)
{
	int sum = 0;
	int c = 0;
	for (int i = 0; i < b; i++)
	{
		c = c * 10 + a;
		sum = sum + c;
	}
	return sum;
}

int main()
{
	int a = 2;
	int b = 5;
	int sum = Sum_1(a,b);
	printf("%d\n",sum);
	system("pause");
	return 0;
}