#include <stdio.h>
int oct_dec(int oct){
	int base=1,dec=0;
	while(oct>0){
		int rem=oct%10;
		dec+=rem*base;
		base*=8;
		oct/=10;
	}
	return dec;
}
void dec_hexa(int oct){
	int dec=oct_dec(oct);
	char hexa[32];
	int i=0;
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
	printf("conversion of octal to hexa decimal : ");
	for(int j=i-1;j>=0;j--){
		printf("%c",hexa[j]);
	}
	printf("\n");
}
int main(){
	int oct;
	printf("enter the octal value:");
	scanf("%d",&oct);
	dec_hexa(oct);
	return 0;
}
