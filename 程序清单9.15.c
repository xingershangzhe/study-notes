/*swap2.c -- 使用指针解决交换函数的问题*/
#include <stdio.h>
void interchange(int *,int *);		//必须使用解引用符号（间接运算符）*说明形参是指向int类型的指针
int main(void)
{
	int x = 5,y = 10;
	
	printf("原来：x = %d, y = %d\n",x,y);
	interchange(&x,&y);
	printf("交换：x = %d, y = %d\n",x,y);	//无返回值，所以没有交换 
	
	return(0); 
}
void interchange(int *x,int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
} 
