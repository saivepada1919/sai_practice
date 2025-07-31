#include <stdio.h>
	int bitwise_mul(int a,int b){
		int result=0;
		while (b>0){
			if(b&1){
				result+=a;
			}
			a=a<<1;
			b=b>>1;
		}
		return result;
	}
	int factorial(int num){
		int fact=1;
		for (int i=2;i<=num;i++){
			fact=bitwise_mul(fact,i);
		}
	   return fact;
	}
	int main(){
		int num;
		printf("enter the value:");
		scanf("%d",&num);
		int f=factorial(num);
		if(num>0){
			printf("factorial of given number: %d\n",f);
		}
		else{
			printf("invalid number\n");
		}
		return 0;
	}
	
