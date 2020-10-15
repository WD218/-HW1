#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	for (int i = 0; i < 10; i = i + 2)
	{
		for (int l = 10; l > i - 1; l = l - 2)
			printf(" ");
		for (int j = 0; j < i + 1; j = j + 1)
			printf("*");
		printf("\n");
	}
	return 0;
}

