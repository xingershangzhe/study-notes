/*charcode.c-显示字符的代码编号*/
#include <stdio.h>
int main(void)
{
	char ch;
	
	scanf("%c",&ch);
	printf("the code for %c is %d.\n",ch,ch);  //c和d互换位置也可以反向显示！！ 
	
	return 0;
}
