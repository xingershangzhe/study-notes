/*summing.c -- �����û�������������*/
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	_Bool status;
	
	printf("Please enter an integer to be summed (q to quit):");
	status = scanf("%ld",&num);
	while(status)
	{
		sum+=num;
		printf("Please enter an integer to be summed (q to quit):");
		status = scanf("%ld",&num);
	}
	printf("Those integers sum to %ld.\n",sum);
	
	return 0;
}
