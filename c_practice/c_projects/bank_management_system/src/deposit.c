#include <stdio.h>
#include "banking.h"
#include <stdlib.h>

void deposit(){
	account a;
	FILE *fp = fopen("account.txt","r");
	FILE *temp = fopen("temp.txt","w");
	int acc_no;
	int found = 0;
	printf("Enter the account no : ");
	scanf("%d",&acc_no);
	float cash;
	while(fscanf(fp,"%d %s %f",&a.accNo,a.name,&a.balance) == 3){
		if(a.accNo == acc_no){
	printf("Enter the cash to deposit : ");
	scanf("%f",&cash);
	a.balance = a.balance+cash;
	found = 1;
		}
		fprintf(temp,"%4d %4s %4f",a.accNo,a.name,a.balance);
	}
	printf("\n");
	fclose(fp);
	fclose(temp);
	remove("account.txt");
	rename("temp.txt","account.txt");
	if(found){
		printf("Deposit sucessfull\n");
	}
	else{
		printf("Deposit unsucessful\n");
	}
}





	

