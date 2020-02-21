/* echo.c -- ÷ÿ∏¥ ‰»Î */
/*––ª∫≥Â I/O*/
#include <stdio.h>
int main(void)
{
	char ch;
	
	while((ch=getchar()) != '#')
		putchar(ch);
		
	return(0);
 } 
