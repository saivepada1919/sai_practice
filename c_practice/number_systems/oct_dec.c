#include <stdio.h>
//#include <math.h>
int main(){
	int n;
	printf("eneter the octal vale:");
	scanf("%d",&n);
	int dec=0;
	int base=1;//base=0;
	while(n>0){
		int rem=n%10;
		dec=dec+rem*base;
	//	dec=dec+rem*pow(8,base);
		base=base*8;
	//	base++;
		n=n/10;
	}
	printf("dec number: %d\n",dec);
	return 0;
}

