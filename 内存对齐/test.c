# include <stdio.h>
# include <windows.h>

# pragma pack(8)
struct s1
{
	char c1;
	int i;
	char c2;
};

# pragma pack(1)
struct s2
{
	char c1;
	int i;
	char c2;
};

int main()
{
	printf("%d\n", sizeof (struct s1));
	printf("%d\n", sizeof (struct s2));
	system("pause");
	return 0;
}
