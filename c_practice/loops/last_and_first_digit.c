#include <stdio.h>
int main(){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	int last=n%10;
	while(n>=10){
		n/=10;
	}
	printf("first= %d last= %d",n,last);
}
