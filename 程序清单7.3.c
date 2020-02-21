/*cypher2.c -- 更改输入，空格不变*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
        
	while ((ch = getchar()) != '\n')       /*当一行未结束时以及读取一个字符*/
	{
		if(isalpha(ch))      /*如果是一个字母*/ 
			putchar(ch + 1);   /*改变字符 并打印出来*/
		else                 /*否则*/ 
			putchar(ch);    /*原样显示*/
	}
	putchar(ch);             /*打印获取的换行符'\n'*/ 
	
	return(0); 
 } 
