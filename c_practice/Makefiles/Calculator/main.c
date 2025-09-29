#include <stdio.h>
#include "calculator.h"
int main(){
	int a,b,choice;
	printf("enter the two numbers:");
	scanf("%d%d",&a,&b);
	char *ptr[]={"ADDITION","SUBTRACTION","MULTIPLICATION","DIVISON"};
	while(1){
		printf("enter your choice\n");
		printf("1.ADDITION  2.SUBTRACTION  3.MULTIPLICATION  4.DIVISON 5.EXIT\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("%s : %d\n",ptr[choice-1],add(a,b));
				break;
			case 2:
				printf("%s : %d\n",ptr[choice-1],sub(a,b));
                                break;
			case 3:
				printf("%s : %d\n",ptr[choice-1],mul(a,b));
                                break;
			case 4:
				if(b!=0){
					printf("%s : %lf\n",ptr[choice-1],div(a,b));
				}
				else{
					printf("Error:division by zero\n");
				} 
				break;
			case 5:
				printf("---------THANKTOU----------\n");
                                return 0;
			default:
				printf("-----------INVALID INPUT-------------\n");
				printf("          PLEASE TRY AGIAN           \n");
		}
	}
	return 0;
}




