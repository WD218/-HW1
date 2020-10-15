#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("number  square  cube\n");

	for (int i = 0; i < 11; i++)

		printf("%d       %d       %d\n", i, i *i, i *i*i);
	system("pause");
	return 0;
}
