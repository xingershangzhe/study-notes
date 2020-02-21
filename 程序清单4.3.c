/*prise2.c*/
//如果编译器不识别%zd,尝试换成%u或%lu。
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."//字符串用双引号 
int main(void)
{
	char name[40];
	
	printf("What's your name?\n");
	scanf("%s",name);
	printf("Your name of %lu letters occupies %lu memory cells.\n",
	strlen(name),sizeof(name));
	printf("The phase of praise has %lu letters",strlen(PRAISE));
	printf("and occupies %lu memory cells.\n",sizeof(PRAISE));
	/*sizeof()包含\0  strlen()不计算空字符'\0'*/
	
	return 0;
} 
