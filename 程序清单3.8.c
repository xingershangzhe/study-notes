/*typesize.c--��ӡ���ʹ�С*/
#include <stdio.h>
int main(void)
{
	/*C99Ϊ���ʹ�С�ṩ%zdת��˵��,����������������%lu����*/
	printf("short has a size of %lu bytes.\n",sizeof(short));
	printf("int has a size of %lu bytes.\n",sizeof(int));
	printf("float has a size of %lu bytes.\n",sizeof(float));
	printf("double has a size of %lu bytes.\n",sizeof(double));
	printf("long has a size of %lu bytes.\n",sizeof(long));
	
	return 0;
}
