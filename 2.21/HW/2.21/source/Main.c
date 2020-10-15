#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("*       *\n");
	}
	for (int i = 0; i < 9; i++)
	{
		printf("*");
	}
	printf("\n");
	printf("   ***  \n");
	printf(" *     * \n");
	for (int i = 0; i < 5; i++)
		printf("*       *\n");
	printf(" *     * \n");
	printf("   ***  \n");
	for (int i = 0; i < 8; i=i+2)
	{
		for (int l = 8; l> i - 1; l=l-2)
			printf(" ");
		for (int j = i-1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 6; i++)
	{
		printf("    *\n");
	}
	printf("\n");
	printf("    *    \n");
	printf("   * *   \n");
	printf("  *   *  \n");
	printf(" *     * \n");
	printf("*       *\n");
	printf(" *     * \n");
	printf("  *   *  \n");
	printf("   * *   \n");
	printf("    *    \n");
	return 0;
}
