/*ì³²¨ÄÇÆõÊýÁÐ*/
#include <stdio.h>
unsigned long Fibonacci(unsigned n);
int main(void)
{
	int n,i;
	printf("Please input a number:");
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		if((i % 8) == 0)
			printf("\n");
		printf("%d\t",Fibonacci(i));
	}
	return 0;
}
unsigned long Fibonacci(unsigned n)
{
	if (n > 2)
		return (Fibonacci(n - 1) + Fibonacci(n - 2));
	else
		return 1;
}
