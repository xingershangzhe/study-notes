/*cypher2.c -- �������룬�ո񲻱�*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
        
	while ((ch = getchar()) != '\n')       /*��һ��δ����ʱ�Լ���ȡһ���ַ�*/
	{
		if(isalpha(ch))      /*�����һ����ĸ*/ 
			putchar(ch + 1);   /*�ı��ַ� ����ӡ����*/
		else                 /*����*/ 
			putchar(ch);    /*ԭ����ʾ*/
	}
	putchar(ch);             /*��ӡ��ȡ�Ļ��з�'\n'*/ 
	
	return(0); 
 } 
