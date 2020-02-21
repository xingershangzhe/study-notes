/*bases.c--以十进制、八进制、十六进制打印十进制数100*/ 
#include <stdio.h>
int main(void)
{
	int x=100;
	
	printf("dec=%d,octal=%o,hex=%x\n",x,x,x);
	printf("dec（十进制）=%d,otcal（八进制）=%#o,hex（十六进制）=%#x",x,x,x);
	
	return 0;
}
