/*altnames.c -- ����ֲ����������*/ 
#include <stdio.h>
#include <inttypes.h>  //֧�ֿ���ֲ���� 
int main(void)
{
	int32_t me32;      //me32��һ��32λ�з������ͱ���
	
	me32=45933945;
	printf("first assume int32_t is int:me32=%d\n",me32);
	printf("use a \"Mac\" from inttypes.h:me32=%d\n",me32);
	
	return 0; 
 } 
