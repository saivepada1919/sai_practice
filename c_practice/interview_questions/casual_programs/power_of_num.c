#include <stdio.h>
int power(int e,int p){
	int res = 1;
	while(p!=0){
		if(p&1){
			res = res * e;
		}
		e = e*e;
		p >>= 1;
	}
	return res;		
}
int main(){
	int b,e;
	printf("enter the base value : ");
	scanf("%d",&b);
	printf("enter the exponential value : ");
	scanf("%d",&e);
	int res = power(b,e);
	printf("%d power of %d  : %d\n",b,e,res);
	return 0;
}

