#include <stdio.h>
void convert_days(int total_days){
	int year=total_days/365;
	int remaining_days=total_days%365;
	int week=remaining_days/7;
	int day=remaining_days%7;
	printf("years :%d\n",year);
        printf("weeks:%d\n",week);
        printf("days:%d\n",day);
}
int main(){
	int days;
	printf("enter the no.of days:");
	scanf("%d",&days);
	if (days >=1){
		convert_days(days);
	}
	else{
		printf("invaild input\n");
	}
	return 0;
}

