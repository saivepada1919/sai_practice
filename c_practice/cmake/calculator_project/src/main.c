#include <stdio.h>

#include "calculator.h"

int main(){
	int a,b,choice;
	printf("enter the a and b values:");
	scanf("%d%d",&a,&b);

	char *op_name[]={"ADDITION","SUBTRACTION","MULTIPLICATION","DIVISION","EXIT"};
     /*	printf("enter your choice \n");
	printf("1.ADDITION  2.SUBTRACTION  3.MULTIPLICATION  4.DIVISION 5.EXIT \n");
	scanf("%d",&choice);*/

	while(1){
		printf("enter your choice \n");
                printf("1.ADDITION  2.SUBTRACTION  3.MULTIPLICATION  4.DIVISION 5.EXIT \n");
                scanf("%d",&choice);
	switch(choice){

		case 1:
			printf("%s: %d\n",op_name[choice-1],add(a,b));
			break;
		case 2:
			printf("%s: %d\n",op_name[choice-1],sub(a,b));
                        break;
		case 3:
			printf("%s: %d\n",op_name[choice-1],mul(a,b));
                        break;
		case 4:
			if(b==0){
				printf("error:division by zero\n");
			}
			else{
				printf("%s: %lf\n",op_name[choice-1],div(a,b));
			}
                        break;
		case 5:
			printf("--------THANKYOU----------\n");
			return 0;
		default:
			printf("---------INVALID INPUT---------- \n          PLEASE TRY AGAIN \n");
	}
	//choice--;
	}
	return 0;
	
}





	

