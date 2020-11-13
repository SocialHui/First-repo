# include <stdio.h>
# include <windows.h>

void Print(char arr[], int num)
{
	int i = 0;
	while (arr[i])
	{
		printf("%c ", arr[i]);
		i++;
	}
	printf("\n");
}

void Backward(char arr[], int num)
{
	int left;
	int right;
	int tmp = 0;
	for (left = 0, right = num - 1; left <= right; left++, right--)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}

int main()
{
	char arr[] = "abcdefgh";
	int num = strlen(arr);
	Print(arr, num);
	Backward(arr,num);
	Print(arr, num);
	system("pause");
	return 0;
}