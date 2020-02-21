/* echo.c -- 重复输入 */
/*无缓冲 I/O*/
#include <stdio.h>
#include <conio.h>       //无缓冲输入函数原型 
int main(void)
{
	char ch;
	
	while((ch=getche()) != '#')    //getche() 可以换成 getch(),两者都不需要[enter]键都可以直接输出， 
		putchar(ch);               //不过前者是输入字符后立即打印该字符，后者输入即输出 
		
	return(0);
 } 
