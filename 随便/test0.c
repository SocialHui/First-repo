//��ӡ���������Ƶ�����λ��ż��λ
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

# include <stdio.h>
# include <windows.h>

int main()
{
	int m = 15;

	printf("����λ������Ϊ�� ");
	for (int i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");

	printf("ż��λ������Ϊ�� ");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	system("pause");
	return 0;
}