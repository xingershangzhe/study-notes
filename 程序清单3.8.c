/*typesize.c--打印类型大小*/
#include <stdio.h>
int main(void)
{
	/*C99为类型大小提供%zd转换说明,其他编译器可以用%lu代换*/
	printf("short has a size of %lu bytes.\n",sizeof(short));
	printf("int has a size of %lu bytes.\n",sizeof(int));
	printf("float has a size of %lu bytes.\n",sizeof(float));
	printf("double has a size of %lu bytes.\n",sizeof(double));
	printf("long has a size of %lu bytes.\n",sizeof(long));
	
	return 0;
}
