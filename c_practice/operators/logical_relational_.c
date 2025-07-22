#include <stdio.h>
int main(){
	int x;
	printf("enter the value:");
	scanf("%d",&x);
	if ((x>=50 && x<=100) && x%2==0){
		printf("%d is even and int range[50,100]\n",x);
	}
	else if(!(x>=50 && x<=100) && x%2==0){
		printf("%d is out of range\n",x);
	}
	return 0;
}
