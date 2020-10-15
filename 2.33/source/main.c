#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int  a, b, c, d, e;
	int  x;
	printf("請輸入一整天的總里程數");
	scanf_s("%d", &a);
	printf("請輸入汽油一公升多少錢");
	scanf_s("%d", &b);
	printf("請輸入平均一公升能行駛多少公里");
	scanf_s("%d", &c);
	printf("請輸入一天的停車費");
	scanf_s("%d", &d);
	printf("請輸入一天的通行費(過路費)");
	scanf_s("%d", &e);

	x = (a / c)*b + d + e;
	printf("一整天開車的花費為：%d", x);
	
	system("pause");
	return 0;
}