# include <stdio.h>
# include <windows.h>

void Backward(char arr[])
{
	int i = 0;
	while (arr[i])   //计算有多少个字符
	{
		i++;
	}
	int left = 0;
	int right = i - 1;
	int tmp = 0;
	while (left <= right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

void Print(char arr[])
{
	int i = 0;
	while (arr[i])   //计算有多少个字符
	{
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		printf("%c ", arr[j]);
	}
	printf("\n");
}

int main()
{
	char arr[] = "abcdefgh";
	Print(arr);
	Backward(arr);
	Print(arr);
	system("pause");
	return 0;
}