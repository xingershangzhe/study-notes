/*swap2.c -- ʹ��ָ������������������*/
#include <stdio.h>
void interchange(int *,int *);		//����ʹ�ý����÷��ţ�����������*˵���β���ָ��int���͵�ָ��
int main(void)
{
	int x = 5,y = 10;
	
	printf("ԭ����x = %d, y = %d\n",x,y);
	interchange(&x,&y);
	printf("������x = %d, y = %d\n",x,y);	//�޷���ֵ������û�н��� 
	
	return(0); 
}
void interchange(int *x,int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
} 
