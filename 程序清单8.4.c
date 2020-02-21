/*guess.c -- 一个拖沓且错误的猜数字程序*/
#include <stdio.h>
int main(void)
{
	int guess = 1;
	
	printf("Pick an integer from 1 to 100. I will try to guess it.\n");
	printf("Respond with a y if my guess is right and with\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n",guess);
	while (getchar() != 'y')
		printf("Well,then is it %d?\n",++guess);  //空格也会算作一个输入，即n和空格都算输入，有两行输出 
	printf("I konw I could do it!\n");
	
	return(0);	
}
