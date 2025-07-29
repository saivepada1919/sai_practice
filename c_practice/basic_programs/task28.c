#include <stdio.h>
int main(){
	int a,b,temp;
	printf("enter two values:");
	scanf("%d%d",&a,&b);
	int x=a,y=b;
	while (b!=0){
		temp =b;
		b=a%b;
		a=temp;
	}
	printf("hcf of %d and %d is %d\n",x,y,a);
	return 0;
}


