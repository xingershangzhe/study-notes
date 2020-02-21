/*sizeof.c -- 使用sizeof运算符*/
//使用C99新增的%zd转换说明 -- 如果编译器不支持%zd，请将其改成%u或%lu
#include <stdio.h>
int main(void)
{
	int n = 0;
	size_t intsize;   //size_t是语言定义的标准类型 
	
	intsize = sizeof(int);  //sizeof 返回 size_t 类型的值 
	printf("n = %d, n has %lu bytes;all ints have %lu bytes.\n",n,sizeof(n),intsize);
	
	return 0;
 } 
