/*paint.c -- 使用条件运算符*/
#include <stdio.h>
#define COVERAGE 350         //每罐油漆可以刷的面积（单位：平方英尺） 
int main(void)
{
	int sq_feet;
	int cans;
	
	printf("Enter number of square feet to be painted:\n");
	while(scanf("%d",&sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;            /*不满整罐的要进一*/
		printf("You need %d %s of paint.\n",cans,cans == 1 ? "can" : "cans"); 
		printf("Please enter next value (q to quit):\n");
	}
	
	return(0);
 } 
