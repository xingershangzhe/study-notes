/*prnrval.c--printf()�ķ���ֵ*/
#include <stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;
	
	rv = printf("%d F is water's boiling point.\n",bph2o);  /*��printf()�ķ���ֵ����rv��
	������ӡ��Ϣ��������ֵ */ 
	printf("The printf() funtion printed %d characters.\n",rv);
	
	return 0;
}
