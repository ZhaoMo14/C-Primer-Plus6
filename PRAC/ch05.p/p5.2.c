#include<stdio.h>
int main(void)
{
	int zhengshu;
	int time = 0;
	
	printf("输入一个整数：\n");
	scanf("%d",&zhengshu);
	
	while(time <= 10){
		printf("%d ",zhengshu + time);
		time++;
	}
	
	return 0;
}
