#include <stdio.h>
int neon(int m){
	int sum=0;
	while(m!=0){
	int k=m%10;
	sum+=k;
	m=m/10;
	}
	return sum;
}
int main(){
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	int m=n*n;
	int res=neon(m);
	if(n==res){
		printf("%d is neon number\n",n);
	}
	else{
		printf("%d is not neon number\n",n);
	}
}

