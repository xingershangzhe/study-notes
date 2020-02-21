/*input.c -- 如何使用&*/
#include <stdio.h>
int main(void)
{
	int age;
	float assets;
	char pet[30];
	
	printf("Please input your age,assets,and favorite pet.\n");
	scanf("%d  %f",&age,&assets);  //中间空格影响不大 
	scanf("%s",pet);
	printf("%d  $%.2f  %s\n",age,assets,pet);
	
	return 0;
} 
