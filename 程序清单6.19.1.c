/*scores.c -- ʹ��ѭ����������*/
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index,score[SIZE];    //index ָ�� 
	int sum=0;
	float average;
	
	printf("Enter %d golf scores:\n",SIZE);
	for(index=0;index<SIZE;++index)
	{
		scanf("%d",&score[index]);   /*��ȡ10������*/
		printf("%4d",score[index]);
	}
//	printf("The scores are as follows:\n");
//	for(index=0;index<SIZE;++index)
//		printf("%4d",score[index]);     /*��֤����*/   /*���ܼ���&���ţ���Ȼ����������ַ*/
	
	printf("\n");
	
	for(index=0;index<SIZE;++index) 
		sum+=score[index];                 /*���ܷ���*/
	
	average=sum/SIZE;
	
	printf("Sum=%d\nAverage=%.2f\nHandicap=%.0f\n",sum,average,average-PAR);
	 
	return 0;
}
