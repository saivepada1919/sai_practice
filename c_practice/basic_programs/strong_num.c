#include <stdio.h>
int strong(int n,int sum){
	while(n!=0){
		int fact=1;
		int b=n%10;
		for (int i=1;i<=b;i++){
			fact *=i;
		}
		sum+=fact;
		n/=10;
	}
	return sum;
}
int main(){
	int n,temp,sum=0;
	printf("enter the value :");
	scanf("%d",&n);
        temp=n;
	int strong_num=strong(n,sum);
	if(temp==strong_num){
		printf("%d is strong number\n",temp);
	}else{
		printf("%d is not strong number\n",temp);
	}
	return 0;
}
