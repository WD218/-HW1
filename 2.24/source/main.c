#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;

	printf("�п�J�Ʀr\n");
	scanf_s("%d",&num1);
	if (num1 % 2 == 1)
	{	
		printf("%d�O�_��\n",num1);
	}
	else
	{	
		printf("%d�O����\n",num1);
	}
	system("pause");
		return 0;
}