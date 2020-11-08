//打印水仙花数
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
# include <stdio.h>
# include <windows.h>
# include <math.h>

void Flower(int i)
{

	int n = 0;
	int j = i;
	while (j > 0)           //计算这个数字有几位
	{
		j /= 10;
		n++;
	}

	int num = 0;
	int m = i;
	while (m)          //计算这个数字的各位个数次方的和
	{
		int k = m % 10;
		num += (int)pow(k, n);
		m = m / 10;
	}

	if (num == i)          //判断是否是水仙花数
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