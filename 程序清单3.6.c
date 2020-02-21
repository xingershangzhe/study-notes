/*altnames.c -- 可移植整数类型名*/ 
#include <stdio.h>
#include <inttypes.h>  //支持可移植类型 
int main(void)
{
	int32_t me32;      //me32是一个32位有符号整型变量
	
	me32=45933945;
	printf("first assume int32_t is int:me32=%d\n",me32);
	printf("use a \"Mac\" from inttypes.h:me32=%d\n",me32);
	
	return 0; 
 } 
