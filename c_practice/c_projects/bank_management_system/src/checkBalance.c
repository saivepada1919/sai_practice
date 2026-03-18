#include <stdio.h>
#include "banking.h"
#include <stdlib.h>

void checkBalance(){
	account a;
	int acc_no;
	printf("enter the account no : ");
	scanf("%d",&acc_no);
	int found = 0;
	FILE *fp = fopen("account.txt","r");
	while(fscanf(fp,"%d %s %f",&a.accNo,a.name,&a.balance) == 3){
		if(a.accNo == acc_no){
			printf("------Account Details-------\n");
		        printf("Name : %s\n",a.name);
		        printf("Account No : %d\n",a.accNo);	
			printf("Available Balance : %.2f\n",a.balance);
			found = 1;
		}
	}
	fclose(fp);
	if(found){
		printf("Account details sucessfully diplayed\n");
	}
	else{
		printf("No Account\n");
	}
}


