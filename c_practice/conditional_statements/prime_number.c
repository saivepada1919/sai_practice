#include <stdio.h>
void prime(){
	int n,i;
       printf("enter number for checking prime number or not:");
	scanf("%d",&n);
	int count =0;
	if (n<=0){
		printf("not prime\n");
	}
	else{
		for(i=1; i<=n;i++){
			if(n%i==0){
				count++;
			}
		}
		if(count ==2){
			printf("%d is prime number\n",n);
		}
		else{
			printf("%d not a prime\n",n);
		}
	}
}
int main(){
	prime();
	return 0;
}

