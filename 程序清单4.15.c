/*input.c -- ���ʹ��&*/
#include <stdio.h>
int main(void)
{
	int age;
	float assets;
	char pet[30];
	
	printf("Please input your age,assets,and favorite pet.\n");
	scanf("%d  %f",&age,&assets);  //�м�ո�Ӱ�첻�� 
	scanf("%s",pet);
	printf("%d  $%.2f  %s\n",age,assets,pet);
	
	return 0;
} 
