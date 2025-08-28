#include <stdio.h>
int root(int *n){
	while(*n>=10){
		int sum=0,temp=*n;
		while(temp!=0){
		int x= temp%10;
		sum += x;
		temp  /= 10;
	}
		*n=sum;
	}
	return *n;
}
int main(){
	int n;
	printf("enter the digit :");
	scanf("%d",&n);
	int res = root(&n);
	printf("digital root of this number:%d\n",res);
	return 0;
}	

