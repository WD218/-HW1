#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int  a, b, c, d, e;
	int  x;
	printf("�п�J�@��Ѫ��`���{��");
	scanf_s("%d", &a);
	printf("�п�J�T�o�@���ɦh�ֿ�");
	scanf_s("%d", &b);
	printf("�п�J�����@���ɯ��p�h�֤���");
	scanf_s("%d", &c);
	printf("�п�J�@�Ѫ������O");
	scanf_s("%d", &d);
	printf("�п�J�@�Ѫ��q��O(�L���O)");
	scanf_s("%d", &e);

	x = (a / c)*b + d + e;
	printf("�@��Ѷ}������O���G%d", x);
	
	system("pause");
	return 0;
}