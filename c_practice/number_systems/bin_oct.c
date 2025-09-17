#include <stdio.h>
int bin_dec(int bin){
	int base=1;
	int dec=0;
	while(bin>0){
		int rem=bin%10;
		dec+=rem*base;
		base*=2;
		bin/=10;
	}
	return dec;
}
void dec_oct(int bin){
	int dec=bin_dec(bin);
	int oct[32];
	int i=0;
	while(dec>0){
		int rem=dec%8;
		oct[i]=rem;
		i++;
		dec/=8;
	}
	printf("conversion of binary to octal:");
	for(int j=i-1;j>=0;j--){
		printf("%d",oct[j]);
	}
	printf("\n");
}
int main(void){
	int bin;
	printf("enter the binary number:");
	scanf("%d",&bin);
	dec_oct(bin);
	return 0;
}

