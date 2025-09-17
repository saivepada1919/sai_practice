#include <stdio.h>
#include <string.h>
#include <ctype.h>
int hexa_dec(char hexa[]){
	int dec=0,base=1;
	int len=strlen(hexa);
	for(int i=0;i<len;i++){
		char ch=toupper(hexa[i]);
		int value=0;
		if(ch>='0' && ch <='9'){
			value=ch-'0';
		}
		else if(ch>='A' && ch<='F'){
			value=ch+10-'A';
		}
		else{
			return 0;
		}
		dec += value*base;
		base*=16;
	}
	return dec;
}
void dec_oct(char hexa[]){
	int dec=hexa_dec(hexa);
	int oct[32];
	int i=0;
	while(dec>0){
		int rem=dec%8;
		oct[i]=rem;
		i++;
		dec/=8;
	}
	printf("conversion of hexa decimalm to octal: ");
	for(int j=i-1;j>=0;j--){
		printf("%d",oct[j]);
	}
	printf("\n");
}
int main(){
	char hexa[32];
	printf("enter the hexa value:");
	scanf("%s",hexa);
	dec_oct(hexa);
	return 0;
}
