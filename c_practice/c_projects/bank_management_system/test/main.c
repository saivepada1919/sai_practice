#include <stdio.h>
#include "banking.h"

int main(){
	int choice;
	while(1){
        printf("\n------ Bank System ------\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Balance\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1: 
		    createAccount(); 
		    break;
            case 2: 
		    deposit(); 
		    break;
            case 3: 
		    withdraw();
		    break;
            case 4: 
		    checkBalance(); 
		    break;
	  /*  case 5:
		    allAccounts();
		    break;*/
            case 5: 
		    printf("-----THANKYOU-----\n");
		    return 0;
            default: 
		    printf("Invalid choice\n");
        }
    }
}
