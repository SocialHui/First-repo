//计算一个整数存储在内存中的二进制中1的个数

/*统计二进制中1的个数
写一个函数返回参数二进制中 1 的个数。
比如： 15    0000 1111    4 个 1*/

//考虑正负数的情况
# include <stdio.h>
# include <windows.h>

int main()
{
	int count = 0;
	int m = 15;   //在内存中存储的二进制 0000 0000 0000 0000 0000 0000 0000 1111

	//for 循环方法
	/*for (int i = 0; i < 32; i++)
	{
		if ((m<<i)&(1 << 31))
		{
			count++;
		}
	}*/

	//while循环方法
	int i = 0;
	while (i<32)
	{
		if (m&(1 << 31))
		{
			count++;
		}
		++i;
		m <<= 1;       //这样写改变了m的大小
	}
	printf("%d\n", count);

	system("pause");
	return 0;
}