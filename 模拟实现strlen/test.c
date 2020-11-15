//模拟实现库函数strlen
//stelrn是计算字符串长度的函数，遇到\0即结束计算

# include <stdio.h>
# include <windows.h>

int my_strlen (const char arr[])
{
	const char *str = arr;
	while (*str)
	{
		str++;
	}
	return ("%d\n", str-arr);
}

int main()
{
	//char arr[] = "abcdefgh";     //保存在栈区
	char *arr = "abcdesgh";     //保存在字符常量区，不可被修改。
	int num = my_strlen(arr);
	printf("%d\n", num);
	system("pause");
	return 0;
}