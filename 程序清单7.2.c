/*cypher.c -- �������룬�ո񲻱�*/
#include <stdio.h>
#define SPACE ' '
int main(void)
{
	char ch;
	
	ch = getchar();          /*��ȡһ���ַ�*/
	while (ch != '\n')       /*��һ��δ����ʱ*/ 
	{
		if(ch == SPACE)      /*���¿ո�*/ 
			putchar(ch);     /*ԭ����ӡ*/
		else
			putchar(ch + 1); /*�ı������ַ� ����ӡ����*/
		ch = getchar();      /*��ȡ��һ���ַ�*/ 
	}
	putchar(ch);             /*��ӡ��ȡ�Ļ��з�'\n'*/ 
	
	return(0); 
 } 
