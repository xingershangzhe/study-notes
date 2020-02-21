/*scores.c -- 使用循环处理数组*/
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index,score[SIZE];    //index 指数 
	int sum=0;
	float average;
	
	printf("Enter %d golf scores:\n",SIZE);
	for(index=0;index<SIZE;++index)
	{
		scanf("%d",&score[index]);   /*读取10个分数*/
		printf("%4d",score[index]);
	}
//	printf("The scores are as follows:\n");
//	for(index=0;index<SIZE;++index)
//		printf("%4d",score[index]);     /*验证输入*/   /*不能加上&符号，不然会输出错误地址*/
	
	printf("\n");
	
	for(index=0;index<SIZE;++index) 
		sum+=score[index];                 /*求总分数*/
	
	average=sum/SIZE;
	
	printf("Sum=%d\nAverage=%.2f\nHandicap=%.0f\n",sum,average,average-PAR);
	 
	return 0;
}
