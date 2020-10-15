#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;

	printf("叫块计\n");
	scanf_s("%d",&num1);
	if (num1 % 2 == 1)
	{	
		printf("%d琌计\n",num1);
	}
	else
	{	
		printf("%d琌案计\n",num1);
	}
	system("pause");
		return 0;
}