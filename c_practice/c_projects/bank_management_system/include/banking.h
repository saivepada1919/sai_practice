#ifndef BANKING_H
#define BANKING_H
typedef struct{
	int accNo;
	char name[50];
	float balance;
} account;
void createAccount();
void deposit();
void withdraw();
void checkBalance();
void allAccounts();
#endif
