#include <stdio.h>
int main(){
	int n,reverse=0;
	printf("enter the value:");
	scanf("%d",&n);
	while(n != 0){
		reverse = reverse *10 + n%10;
		n /=10;
	}
	printf("reversed value is %d\n",reverse);
       return 0;
}       
