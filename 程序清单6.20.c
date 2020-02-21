/*power.c-- 计算数的整数幂*/
#include <stdio.h>
double power(double n,int p);    //函数原型 
int main(void)
{
	double x,xpow;
	int exp;
	
	printf("please enter two number:\n");
	while( scanf("%lf %d",&x,&exp) == 2)
	{
		xpow = power(x,exp);
		printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
		printf("please enter next two number:\n");
	}
	
	return 0;
}
double power(double n,int p)
{
	double pow=1;
	int i;
	
	for(i=1;i<=p;i++)
		pow*=n;
		
	return pow;
}
