/*define.c -- 使用limits.h和float.h头文件中定义的符号常量*/
#include <stdio.h>
#include <limits.h>   //整型限制
#include <float.h>   //浮点型限制 
int main(void)
{
	printf("some number limits for this system:\n");
	printf("Biggest int:%d\n",INT_MAX);
	printf("smallest long long:%lld\n",LLONG_MIN);
	printf("one bite = %d bits on this system.\n",CHAR_BIT);
	printf("largest double:%e\n",DBL_MAX);
	/* 《C Primer plus》P79有源码*/
	
	return 0;
}
