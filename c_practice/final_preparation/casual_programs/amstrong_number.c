#include <stdio.h>
#include <math.h>


int amstrong(int n){
	if(n >= 0 && n<=9){
		return n;
	}
	int res = 0;
	int temp = n;
	int digits = 0;
	while(temp !=0){
		digits++;
		temp /= 10;
	}
	while(n !=0){
		int rem = n % 10;
		res = res + pow(rem,digits);
		n /= 10;
	}
	return res;
}

int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int res = amstrong(n);
	if(res == n){
		printf("Amstrong number\n");
	}
	else{
		printf("Not amstrong number\n");
	}
	return 0;
}
