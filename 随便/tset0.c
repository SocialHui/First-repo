//编写代码，演示多个字符从两端向中间移动
# include <stdio.h>
# include <windows.h>

int main()
{
	char arr1[] = "abcdefghijklmnopq";
	char arr2[] = "###############";
	int left = 0;
	int right = strlen(arr2) - 1;
	printf("%s\r", arr2);
	while (left <= right)
	{
		Sleep(300);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\r", arr2);
	}
	printf("\n");
	system("pause");
	return 0;
}