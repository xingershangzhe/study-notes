/* echo_eof.c -- �ظ����룬ֱ���ļ���β*/
#include <stdio.h>
int main(void) 
{
	int ch;
//	int i=0;
	
	printf("Enter some characters:\n");
	while((ch=getchar()) != EOF)  //��ϵͳ��һ�п�ʼ����Ctrl+Zʶ��Ϊ�ļ���β�ź� 
	{
		putchar(ch);        //һЩϵͳ�������λ�õ�Ctrl+Zʶ��Ϊ�ļ���β�ź�  
//		i++;                //����һЩϵͳ��һ�п�ʼ����Ctrl+Dʶ��Ϊ�ļ���β�ź�
	}
//	printf("It's has %d characters.\n",i);
	
	return(0);
}
