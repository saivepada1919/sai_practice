#include <stdio.h>
int main(){
	int marks,income;
	printf("enter marsk and income for scholarship scheme:");
	scanf("%d %d",&marks,&income);
	if(marks >=80){
		if(income <= 200000){
			printf("eligible for scholarship scheme\n");
		}
		else{
			printf("Not eligible for scholarship scheme\n");
		}
	}
	else{
		printf("Not eligible\n");
	}
	return 0;
}
