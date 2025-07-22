#include <stdio.h>
int main(){
	int x;
	printf("enter the number: ");
	scanf("%d",&x);
	int y,sum=0;
	for (;x>0;x /= 10){
		y=x%10;
	        sum += y;
	        }
         printf("sum of three digits:)%d\n",sum);
return 0;
}

