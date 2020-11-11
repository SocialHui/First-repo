//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

# include <stdio.h>
# include <windows.h>

int main()
{
	int m = 1999;
	int n = 2299;
	int count = 0;
	int i = m^n;   //两个数相异或以后比特位相同为0，不同为1，所以计算1的个数即可知道有多少个比特位不同
	while (i)       //&多少次代表有多少个相同比特位（相当于计算二进制中1的个数）
	{
		count++;
		i = i&(i - 1);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}