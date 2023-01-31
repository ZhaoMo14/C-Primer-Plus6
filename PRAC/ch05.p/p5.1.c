#include<stdio.h>
int main(void)
{
	int time;
	int min;
	int hour;
	const int SEC_PER_MIN = 60;
	
	while(time > 0){
		printf("输入分钟\n");
		
		scanf("%d", &time);
		hour = time / SEC_PER_MIN;
		min = time % SEC_PER_MIN;
		printf("%d分钟等于%d小时%d分钟\n", time, hour, min);
	}
	
	return 0;
}
