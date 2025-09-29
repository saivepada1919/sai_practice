#include <stdio.h>

#include "temperature.h"

int main(){
	float a;
	int choice;
	char *op_name[]={"CELISUS-TO-FAHRENHEIT","FAHRENHEIT-TO-CELISUS"};
	while(1){
		printf("\n enter your choice\n");
		printf("1.CELISUS TO FAHRENHEIT     2.FAHRENHEIT TO CELISUS     3 .EXIT \n");
		scanf("%d",&choice);
		if(choice==3){
                               printf("\n--------------PLEASE VISIT AGAIN---------------\n");
                               printf("                      THANKYOU      \n");
                               return 0;
		}
		printf("Enter temperature: ");
                scanf("%f",&a);

		switch(choice){
			case 1:
				printf("%s :%2ff",op_name[choice-1],celsius_to_fahrenheit(a));
				break;
			case 2:
				printf("%s :%2fc\n",op_name[choice-1],fahrenheit_to_celsius(a));
                                break;
			default:
				printf("           INVALID INPUT           \n");
				printf("          PLEASE TRY AGAIN         \n");
		}
	}
	return 0;
}



		
