#include <stdio.h>
int main(){
	int x;
	printf("enter the number: ");
	scanf("%d",&x);
	if (x%2==0 && x%5==0){
	       printf("%d number is Even and divisible by 5\n",x);
	}
	else{
		printf("%d Not both even and divisible by 5\n",x);
	}
	return 0;
}

