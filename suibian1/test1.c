//ģ��ʵ�ֿ⺯��strcpy

# include <stdio.h>
# include <windows.h>

char* MyStrcpy(char *str , const char *arr)
{
	char * cp = str;
	while (*cp++ = *arr++);
	return str;
}

int main()
{
	char arr[] = "abcdefgh";
	char str[] = "        ";
	char * det=MyStrcpy(str, arr);
	for (int i = 0; i < 8; i++)   //��ӡ��������ַ���
	{
		printf("%c ", det[i]);
	}
	system("pause");
	return 0;
}