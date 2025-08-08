#include <stdio.h>
int main(){
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if(year%4==0){
		if(year%100 ==0){
			if(year%400==0){
				printf("%d is leap year\n",year);
			}else{
				printf("%d not a leap year\n",year);
			}
		}else{
			printf("%d is leap year\n",year);
		}
	}else{
		printf("%d is not leap year\n",year);
	}
	return 0;
}
		
