/*sizeof.c -- ʹ��sizeof�����*/
//ʹ��C99������%zdת��˵�� -- �����������֧��%zd���뽫��ĳ�%u��%lu
#include <stdio.h>
int main(void)
{
	int n = 0;
	size_t intsize;   //size_t�����Զ���ı�׼���� 
	
	intsize = sizeof(int);  //sizeof ���� size_t ���͵�ֵ 
	printf("n = %d, n has %lu bytes;all ints have %lu bytes.\n",n,sizeof(n),intsize);
	
	return 0;
 } 
