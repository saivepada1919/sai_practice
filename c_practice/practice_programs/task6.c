#include <stdio.h>
int main(){
	int n,count=0;
	printf("enter the number :");
	scanf("%d",&n);
	int temp=n;
	while(n!=0){
		int m=n%10;
		if(m!=0){
			if(temp%m==0){
				count++;
			}
		}
		n/=10;
	}
	printf("count of divisible digits=%d\n",count);
	return 0;
}
