# include <stdio.h>
# include <windows.h>

int main()
{
	int m = 15;
	int count = 0;
	
	int i = 0;
	while (i<32)     //�������Ҳ���á�
	{
		if (m & 1)
		{
			count++;
		}
		i++;
		m >>= 1;    //m�����Ժ��ұ�λ�������������ӷ���λ��
	}

	/*while (m)     //������������á�
	{
		if (m & 1)
		{
			count++;
		}
		m >>= 1;    //m�����Ժ��ұ�λ�������������ӷ���λ��
	}*/

	printf("%d\n", count);
	system("pause");
	return 0;
}