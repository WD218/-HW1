#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;

	printf("請輸入數字\n");
	scanf_s("%d",&num1);
	if (num1 % 2 == 1)
	{	
		printf("%d是奇數\n",num1);
	}
	else
	{	
		printf("%d是偶數\n",num1);
	}
	system("pause");
		return 0;
}