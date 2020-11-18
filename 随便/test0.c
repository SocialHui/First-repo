//打印整数二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

# include <stdio.h>
# include <windows.h>

int main()
{
	int m = 15;

	printf("奇数位二进制为： ");
	for (int i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");

	printf("偶数位二进制为： ");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	system("pause");
	return 0;
}