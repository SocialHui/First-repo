//��ӡˮ�ɻ���
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
# include <stdio.h>
# include <windows.h>
# include <math.h>

void Flower(int i)
{

	int n = 0;
	int j = i;
	while (j > 0)           //������������м�λ
	{
		j /= 10;
		n++;
	}

	int num = 0;
	int m = i;
	while (m)          //����������ֵĸ�λ�����η��ĺ�
	{
		int k = m % 10;
		num += (int)pow(k, n);
		m = m / 10;
	}

	if (num == i)          //�ж��Ƿ���ˮ�ɻ���
	{
		printf("%d\n", num);
	}

}

int main()
{
	int i;
	for (i = 0; i < 1000000; i++)
	{
		Flower(i);
	}
	system("pause");
	return 0;
}