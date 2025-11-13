#include <stdio.h>
int power(int base,int expo){
	int res = 1;
	for(int i=1;i<=expo;i++){
		res *= base;
	}
	return res;
}
		
		
int powersum(int n,int count){
	int res = 0;
	while(n!=0){
		int rem = n%10;
		res += power(rem,count);
		n/=10;
	}
	return res;
}

void amstrong(int n){
	int temp;
	temp = n;
	int count =0;
	while(temp != 0){
		count++;
		temp/=10;
	}
	int res = powersum(n,count);
	if(n == res){
		printf("%d ",n);
	}
}



int main(){
	int s,e;
	printf("enter the starting value : ");
	scanf("%d",&s);
	printf("enter the ending value :  ");
	scanf("%d",&e);
	for(int i=s;i<=e;i++){
		amstrong(i);
	}
	printf("\n");
	return 0;
}

