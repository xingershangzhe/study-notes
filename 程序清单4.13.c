/*prnrval.c--printf()的返回值*/
#include <stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;
	
	rv = printf("%d F is water's boiling point.\n",bph2o);  /*把printf()的返回值赋给rv。
	——打印信息、变量赋值 */ 
	printf("The printf() funtion printed %d characters.\n",rv);
	
	return 0;
}
