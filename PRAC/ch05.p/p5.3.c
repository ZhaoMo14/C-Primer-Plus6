#include<stdio.h>
int main(void)
{
	int tian;
	int days;
	int weeks;
	const int DAYS_PER_WEEK = 7;
	
	while(tian > 0){
		printf("输入天数\n");
		
		scanf("%d", &tian);
		weeks = tian / DAYS_PER_WEEK;
		days = tian % DAYS_PER_WEEK;
		printf("%d days are %d weeks, %d days.\n", tian, weeks, days);
	}
	
	return 0;
}
