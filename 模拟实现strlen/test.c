//ģ��ʵ�ֿ⺯��strlen
//stelrn�Ǽ����ַ������ȵĺ���������\0����������

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
	//char arr[] = "abcdefgh";     //������ջ��
	char *arr = "abcdesgh";     //�������ַ������������ɱ��޸ġ�
	int num = my_strlen(arr);
	printf("%d\n", num);
	system("pause");
	return 0;
}