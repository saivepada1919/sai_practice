#include <stdio.h>
int main(){
	int n,odd=1,even=1,pos=1;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0){
		int d=n%10;
		if (pos%2==0){
			even *=d;
		}
		else{
			odd *=d;
		}
		n/=10;
		pos++;
	}
	printf("even product=%d\n",even);
	printf("odd product=%d\n",odd);
	return 0;
}


