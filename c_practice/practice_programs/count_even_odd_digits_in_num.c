#include <stdio.h>
int main(){
	int n,even=0,odd=0;
	printf("enter the value :");
	scanf("%d",&n);
	while(n!=0){
		int m=n%10;
		if(m%2==0){
			even++;
		}else{
			odd++;
		}
		n/=10;
	}
	printf("even digits:%d\n",even);
	printf("odd digits:%d\n",odd);
	return 0;
}
		
