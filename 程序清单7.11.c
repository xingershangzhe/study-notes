/*animals.c -- ʹ��switch���*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	
	printf("Give me a letter of the alphabet,and I will give an animal name\n beginning with that letter.\n");
	printf("Please type in a letter; type # to end my act.\n");
	while((ch = getchar()) != '#')
	{
		if('\n' == ch)
			continue;
		if(islower(ch))      /*ֵ����Сд��ĸ*/
			switch(ch)
		{
			case 'a':printf("argali\n");	break;
			case 'b':printf("babirusa\n");	break;
			case 'c':printf("cat\n");	break;
			case 'd':printf("dog\n");	break;
			default:printf("That's all!\n");
		}                 /*switch����*/ 
		else 
			printf("I recognize only lowercase letters.\n");
		while(getchar()!='\n')
			continue;            /*���������е�ʣ�ಿ��*/
		printf("Please enter another letter or a #.\n");
	}                       /*while ѭ������*/ 
	printf("Bye!\n");
	
	return(0);
}
