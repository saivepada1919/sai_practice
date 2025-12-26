#include <stdio.h>
int hcf(int a,int b){
	while(b!=0){
		int temp = b;
		b = a%b;
		a = temp;
	}
	return a;
}
int main(){
	int a,b;
	printf("enter the a and b value : ");
	scanf("%d%d",&a,&b);
	int lcm,gcd;
	int min = (a<b)?a:b;
	/*for(int i = 1;i<=min;i++){
		if(a%i==0 && b%i==0){
			gcd = i;
		}
	}*/
	gcd = hcf(a,b);
	lcm = (a*b)/gcd;
	printf("gcd : %d\n",gcd);
	printf("lcm : %d\n",lcm);
	return 0;
}

