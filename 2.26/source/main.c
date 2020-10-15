#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x, y;
	scanf_s("%d%d", &x, &y);

	if (y%x == 0)
	{
		printf("%d 是 %d 的倍數", y, x);
	}
	else
	{
		printf("%d 不是 %d 的倍數", y, x);
	}
	system("pause");
	return 0;
}