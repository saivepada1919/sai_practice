#include <stdio.h>
#include "banking.h"
#include <stdlib.h>

//create account

void createAccount(){
	FILE *fp = fopen("account.txt","a");
	account a;
	printf("-----ENTER THE DETAILS OF THE NEW COUSTMER-----\n");
	printf("Enter AccNo Name Balance:\n");
        scanf("%d %s %f", &a.accNo, a.name, &a.balance);
	fprintf(fp,"%d     %s     %.2f \n", a.accNo, a.name, a.balance);
	fclose(fp);
}


