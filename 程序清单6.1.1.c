/*summing.c -- �����û�������������*/
/************************/
/******  �������  ******/
/************************/
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	char ch;
//	int status;
	
	printf("Please enter an integer to be summed (q to quit):");
	/*status =*/ scanf("%ld",&num);
//	printf("If continue? <y/n>:");
//	scanf("%c",&ch);
	while(scanf("%c",&ch) !='n')
	{
		sum+=num;
//		printf("If continue? <y/n>:");
//		scanf("%c",&ch);
		printf("Please enter an integer to be summed (q to quit):");
		scanf("%ld",&num);	
	}
	printf("Those integers sum to %ld.\n",sum);
	
	return 0;
}
