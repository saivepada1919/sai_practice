#include <stdio.h>
int bin_dec(int bin){
	int dec=0;
	int base=1;
	while(bin>0){
		int rem=bin%10;
		dec+=rem*base;
                base*=2;
		bin/=10;
	}
	return dec;
}
void dec_hexa(int bin){
	int dec=bin_dec(bin);
	int i=0;
	int hexa[32];
	while(dec>0){
		int rem=dec%16;
		if(rem<10){
			hexa[i]=rem+'0';
		}
		else{
			hexa[i]=rem-10+'A';
		}
		i++;
		dec/=16;
	}
	printf("binary to hexa conversion:");
	for(int j=i-1;j>=0;j--){
		printf("%c",hexa[j]);
	}
	printf("\n");
}
int main(){
	int bin;
	printf("enter the binary number:");
	scanf("%d",&bin);
	dec_hexa(bin);
	return 0;
}
