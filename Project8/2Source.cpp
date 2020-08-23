#include<stdio.h>
int main()
{
	int level;
	scanf_s("%d", &level);
	if (level < 0)
	{
		printf("Error");
	}
	for (int row = 0;row <= level;row++)
	{
		for (int space = level - row;space > 0;space--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}