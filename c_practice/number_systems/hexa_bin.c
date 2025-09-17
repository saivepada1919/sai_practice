#include <stdio.h>
#include <string.h>
#include <ctype.h>
int hexa_dec(char hexa[]){
	int len=strlen(hexa);
	int base=1,dec=0;
	for(int i=0;i<len;i++){
		int value=0;
		char ch=toupper(hexa[i]);
                if(ch>='0' && ch<='9'){
			value=ch-'0';
		}
		else{
			value=ch+10-'A';
		}
                dec+=value*base;
                base*=16;
        }
        return dec;
}
void dec_bin(char hexa[]){
        int dec=hexa_dec(hexa);
        int bin[32];
        int i=0;
        while(dec>0){
                int rem=dec%2;
                bin[i]=rem;
                i++;
                dec/=2;
        }
        printf("conversion of hexa to binary:");
        for(int j=i-1;j>=0;j--){
                printf("%d",bin[j]);
        }
        printf("\n");
}
int main(void){
        char hexa[32];
        printf("enter the hexa number:");
        scanf("%s",hexa);
        dec_bin(hexa);
        return 0;
}

