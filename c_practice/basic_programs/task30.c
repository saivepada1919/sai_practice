#include <stdio.h>
int add_mul(int a,int b,int sum){
	for(int i=1;i<=b;i++){
		sum +=a;
	}
	return sum;
}
int main(){
	int a,b,sum=0;
	printf("enter the two numbers: ");
	scanf("%d%d",&a,&b);
	int mul_res=add_mul(a,b,sum);
	printf("multiplication using + operator of %d and %d = %d\n",a,b,mul_res);
	return 0;
}

	
