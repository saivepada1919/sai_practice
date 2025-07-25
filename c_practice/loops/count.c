#include <stdio.h>
int main(){
	int n,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	if (n==0){
		count=1;
	}
	else{
		while( n!=0){
			n=n /10;
			count++;
		}
	}
	printf("no of digits in given numbers is  = %d\n",count);
	return 0;
}
