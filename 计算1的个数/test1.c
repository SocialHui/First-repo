# include <stdio.h>
# include <windows.h>

int main()
{
	int m = 15;
	int count = 0;
	
	int i = 0;
	while (i<32)     //负数情况也适用。
	{
		if (m & 1)
		{
			count++;
		}
		i++;
		m >>= 1;    //m右移以后，右边位置舍弃，左边添加符号位。
	}

	/*while (m)     //负数情况不适用。
	{
		if (m & 1)
		{
			count++;
		}
		m >>= 1;    //m右移以后，右边位置舍弃，左边添加符号位。
	}*/

	printf("%d\n", count);
	system("pause");
	return 0;
}