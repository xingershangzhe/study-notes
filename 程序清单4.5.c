/*define.c -- ʹ��limits.h��float.hͷ�ļ��ж���ķ��ų���*/
#include <stdio.h>
#include <limits.h>   //��������
#include <float.h>   //���������� 
int main(void)
{
	printf("some number limits for this system:\n");
	printf("Biggest int:%d\n",INT_MAX);
	printf("smallest long long:%lld\n",LLONG_MIN);
	printf("one bite = %d bits on this system.\n",CHAR_BIT);
	printf("largest double:%e\n",DBL_MAX);
	/* ��C Primer plus��P79��Դ��*/
	
	return 0;
}
