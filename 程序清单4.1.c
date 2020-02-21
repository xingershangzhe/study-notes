//talkback.c--演示与用户交互
#include <stdio.h>
#include <string.h>   //提供strlen()函数原型 
#define DENSITY 62.4   //人体密度
int main(void)   //尝试void是否可以用？
{
	float weight,volume;
	int size,letters;
	char name[40];
	
	printf("What's your first name?\n");
	scanf("%s",&name);   //&可有可无 
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	size=sizeof(name);    //不能加上&
	letters=strlen(name);  //不能加上& 
	volume=weight/DENSITY;
	printf("well,%s,your volume is %2.2f cubic feet.\n",name,volume);
	printf("also,your first name has %d letters,\n",letters);
	printf("and we have %d bytes to store it.\n",size);  //计算数组name的存储空间——40 
	
	return 0;
 } 
