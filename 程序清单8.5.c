/*showchar1.c -- �нϴ�I/O����ĳ���*/
//����һ���ַ����������֣���������ָ��������������ӡ���ַ� 
#include <stdio.h>
void display(char cr,int lines,int width);
int main(void)
{
	int ch;         /*����ӡ�ַ�*//*ע����int,������char,���ڼ��EOF*/
	int rows,cols;  /*ָ��������������*/
	
	printf("Enter a character and two integer:\n");
	while((ch =getchar()) != '\n')
	{
		scanf("%d %d",&rows,&cols);
		display(ch,rows,cols);          //�˴�����������ת�����棬���Ի��� display(char(ch),rows,cols); 
		printf("Enter another character and two integer:\n");
		printf("Enter a new line to quit.\n");  //(ch =getchar()) == '\n' ����ѭ�� 
	}
	printf("Bye.\n");
	
	return(0);
}
void display(char cr,int lines,int width)
{
	int row,col;       // �����ۼӵ����������� 
	
	for(row =1;row <= lines; row++)
	{
		for(col=1;col <= width; col++)
			putchar(cr);
		putchar('\n');       /*����һ�в���ʼ�µ�һ��*/
	}
}
