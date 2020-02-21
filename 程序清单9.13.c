/*程序清单9.13 swap1.c -- 交换函数*/
#include <stdio.h>
void interchange(int,int);
int main(void)
{
	int x = 5,y = 10;
	
	printf("原来：x = %d, y = %d\n",x,y);
	interchange(x,y);
	printf("交换：x = %d, y = %d\n",x,y);	//无返回值，所以没有交换 
	
	return(0); 
}
void interchange(int x,int y)
{
	int temp;
	
	temp = x;
	x = y;
	y = temp;
}
