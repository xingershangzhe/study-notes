/*prise2.c*/
//�����������ʶ��%zd,���Ի���%u��%lu��
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."//�ַ�����˫���� 
int main(void)
{
	char name[40];
	
	printf("What's your name?\n");
	scanf("%s",name);
	printf("Your name of %lu letters occupies %lu memory cells.\n",
	strlen(name),sizeof(name));
	printf("The phase of praise has %lu letters",strlen(PRAISE));
	printf("and occupies %lu memory cells.\n",sizeof(PRAISE));
	/*sizeof()����\0  strlen()��������ַ�'\0'*/
	
	return 0;
} 
