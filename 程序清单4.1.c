//talkback.c--��ʾ���û�����
#include <stdio.h>
#include <string.h>   //�ṩstrlen()����ԭ�� 
#define DENSITY 62.4   //�����ܶ�
int main(void)   //����void�Ƿ�����ã�
{
	float weight,volume;
	int size,letters;
	char name[40];
	
	printf("What's your first name?\n");
	scanf("%s",&name);   //&���п��� 
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	size=sizeof(name);    //���ܼ���&
	letters=strlen(name);  //���ܼ���& 
	volume=weight/DENSITY;
	printf("well,%s,your volume is %2.2f cubic feet.\n",name,volume);
	printf("also,your first name has %d letters,\n",letters);
	printf("and we have %d bytes to store it.\n",size);  //��������name�Ĵ洢�ռ䡪��40 
	
	return 0;
 } 
