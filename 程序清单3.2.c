/*print1.c - 演示printf()的一些特性*/
#include <stdio.h>
int main(void)
{
	int ten=10,two=2;
	
	printf("%d minus %d is %d\n",ten,2,ten-two);   //若把2改为3，结果也不变。 
	
	return 0;
}
