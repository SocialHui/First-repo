//模拟实现库函数strcpy

# include <stdio.h>
# include <windows.h>

void MyStrcpy(char *str , const char *arr)
{
	int count = 0;
	while (arr[count])
	{
		str[count] = arr[count];
		count++;
	}
	count = 0;
	while (str[count])
	{
		printf("%c ", str[count]);
		count++;
	}
}

int main()
{
	char arr[] = "abcdefgh";
	char str[] = "        ";
	MyStrcpy(str, arr);
	system("pause");
	return 0;
}