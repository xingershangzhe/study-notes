/*colddays.c--�ҳ�0��C���µ�����ռ�������İٷֱ�*/
#include <stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0,all_days = 0;
	
	printf("Enter the list of daily low temperature.\nUse Celsius,and enter q to quit.\n");
	while(scanf("%f",&temperature) == 1)  /*��ȡһ������*/
	{
		all_days++;
		if(temperature < FREEZING)
			cold_days++;
	}
	if(all_days != 0)            /*��ӡ�������Լ�0��C���µ�������ռ�ٷֱ�*/ 
		printf("%d days total: %.lf%% were below freezing.\n",all_days,100.0*(float)cold_days / all_days);
	if(all_days == 0)
		printf("No data entered!\n");
	
	return(0);
} 
