# include <stdio.h>
# include <windows.h>

void Show(int str[], int num)
{
	for (int i = 0; i < num; i++)  
	{
		printf("%d ", str[i]);
	}
	printf("\n");
}

void Sort(int str[], int num)
{
	for (int i = 0; i < num; i++)    
	{
		int count = 0;
		//һ��ð����û�з���һ�ν�����֤��ԭ��������
		for (int j = 0; j < num - i - 1; j++)
		{
			if (str[j]>str[j + 1])
			{
				int a = str[j];
				str[j] = str[j + 1];
				str[j + 1] = a;
				count++;
			}
		}
		if (count == 0)     //�������鱾�����򣬲���Ҫ�������������ֱ���˳�����ѭ��
		{
			break;
		}
	}
}

int main()
{
	int str[] = { 1, 2, 6, 5, 8, 9, 4, 7, 3 };
	int num = sizeof (str) / sizeof (str[0]);      //��������Ԫ�ظ���
	Show(str, num);    //����ǰ�����ӡ
	Sort(str, num);      //��������
	Show(str, num);   //����������ӡ
	system("pause");
	return 0;
}
