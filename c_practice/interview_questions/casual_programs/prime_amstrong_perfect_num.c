#include <stdio.h>
#include <math.h>
void prime(int n){
	int isprime=1;
	for(int i=2;i<n;i++){
		if(n%i==0){
			isprime=0;
		}
	}
	if(isprime){
		printf("%d is prime number\n",n);
	}
	else{
		printf("%d is not prime number\n",n);
	}
}
void amstrong(int n){
	int count =0;
	int temp1=n;
	int temp2=n;
	while(n!=0){
		count++;
		n/=10;
	}
	int sum=0;
	while(temp1!=0){
		int rem=temp1%10;
		sum += pow(rem,count);
		temp1/=10;
	}
	if(temp2 == sum){
		printf("%d is amstrong number\n",temp2);
	}
	else{
		printf("%d is not amstrong number\n",temp2);
	}
}
void perfect(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		printf("%d is perfect numebr\n",n);
	}
	else{
		printf("%d is not perfect number\n",n);
	}
}
		
int main(){
	int n;
	printf("enter the number of n: ");
	scanf("%d",&n);
	prime(n);
	amstrong(n);
	perfect(n);
	return 0;
}

