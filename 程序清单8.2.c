/* echo_eof.c -- 重复输入，直到文件结尾*/
#include <stdio.h>
int main(void) 
{
	int ch;
//	int i=0;
	
	printf("Enter some characters:\n");
	while((ch=getchar()) != EOF)  //本系统把一行开始处的Ctrl+Z识别为文件结尾信号 
	{
		putchar(ch);        //一些系统会把任意位置的Ctrl+Z识别为文件结尾信号  
//		i++;                //还有一些系统把一行开始处的Ctrl+D识别为文件结尾信号
	}
//	printf("It's has %d characters.\n",i);
	
	return(0);
}
