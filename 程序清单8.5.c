/*showchar1.c -- 有较大I/O问题的程序*/
//读入一个字符和两个数字，根据数字指定行数和列数打印该字符 
#include <stdio.h>
void display(char cr,int lines,int width);
int main(void)
{
	int ch;         /*待打印字符*//*注意是int,而不是char,用于检测EOF*/
	int rows,cols;  /*指定的行数和列数*/
	
	printf("Enter a character and two integer:\n");
	while((ch =getchar()) != '\n')
	{
		scanf("%d %d",&rows,&cols);
		display(ch,rows,cols);          //此处可能有类型转换警告，可以换成 display(char(ch),rows,cols); 
		printf("Enter another character and two integer:\n");
		printf("Enter a new line to quit.\n");  //(ch =getchar()) == '\n' 跳出循环 
	}
	printf("Bye.\n");
	
	return(0);
}
void display(char cr,int lines,int width)
{
	int row,col;       // 进行累加的行数和列数 
	
	for(row =1;row <= lines; row++)
	{
		for(col=1;col <= width; col++)
			putchar(cr);
		putchar('\n');       /*结束一行并开始新的一行*/
	}
}
