//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
/*
˼·��
1. ���������±�left��right��left�����������ʼλ�ã�right�������������һ��Ԫ�ص�λ��
2. ѭ������һ�²���
a. ���left��right��ʾ������[left, right]��Ч������b���������ѭ��
b. left��ǰ�����ң��ҵ�һ��ż����ֹͣ
c. right�Ӻ���ǰ�ң��ҵ�һ��������ֹͣ
d. ���left��right���ҵ��˶�Ӧ�����ݣ��򽻻�������a��
*/

# include <stdio.h>
# include <windows.h>

void Exchange(int *arr, int size)
{
	int tmp = 0;
	int left = 0;
	int right = size - 1;

	while (left < right)
	{
		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
		while ((left < right) && (arr[left] % 2 == 0))
		{
			left++;
		}

		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
		while ((left < right) && (arr[right] % 2 ==1))
		{
			right--;
		}

		// ���ż�����������ҵ����������������ݵ�λ��
	    // Ȼ������ң�ֱ������ָ������
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}

	}
}

void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1, 2, 6, 5, 4, 8, 9, 0 };
	int size = sizeof (arr) / sizeof (arr[0]);
	Print(arr, size);
	Exchange(arr, size);
	Print(arr, size);
	system("pause");
	return 0;
}