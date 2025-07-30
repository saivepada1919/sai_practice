#include <stdio.h>
int main(){
	int n,even=0,odd=0;
	printf("enter the digits:");
	scanf("%d",&n);
	while(n!=0){
		int m=n%10;
		if (m%2==0){
			even+=m;
		}
		else{
			odd+=m;
		}
		n/=10;
	}
	printf("sum of even digits=%d\n",even);
	printf("sum of odd digits=%d\n",odd);
	printf("differnce between  even sum and odd sum=%d\n",even-odd);
	return 0;
}

