#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x, y;
	scanf_s("%d%d", &x, &y);

	if (y%x == 0)
	{
		printf("%d �O %d ������", y, x);
	}
	else
	{
		printf("%d ���O %d ������", y, x);
	}
	system("pause");
	return 0;
}