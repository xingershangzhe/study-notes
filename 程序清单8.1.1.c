/* echo.c -- �ظ����� */
/*�޻��� I/O*/
#include <stdio.h>
#include <conio.h>       //�޻������뺯��ԭ�� 
int main(void)
{
	char ch;
	
	while((ch=getche()) != '#')    //getche() ���Ի��� getch(),���߶�����Ҫ[enter]��������ֱ������� 
		putchar(ch);               //����ǰ���������ַ���������ӡ���ַ����������뼴��� 
		
	return(0);
 } 
