#include <stdio.h>
//#include <math.h>
int main(){
	long long int n;
	printf("enter the binary value:");
	scanf("%lld",&n);
	int dec=0;
	//int base=0;
	int base=1;
	while(n>0){
		int k=n%10;
	//	dec+=k*pow(2,base);
		dec+=k*base;
		base*=2;
		n/=10;
	}
	printf("dec no:%d\n",dec);
	return 0;
}
