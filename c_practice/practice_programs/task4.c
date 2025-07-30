#include <stdio.h>
int main(){
	int n,m=0;
	int temp=n;
	printf("enter th digit:");
	scanf("%d",&n);
	while(n!=0){
		m=m*10+n%10;
		n/=10;
	}
	printf("reverse number:%d\n",m);
	if(m%temp==0){
		printf("it is divisible\n");
	}
	else{
		printf("not divisible");
	}
	return 0;
}

