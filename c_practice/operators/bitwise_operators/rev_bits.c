#include <stdio.h>
int rev(unsigned short n,int result){
	for(int i=1;i<=16;i++){
		result <<=1;
		result |=(n&1);
		n=n>>1;
	}
	return result;
}			
int main(){
	unsigned short int n;
	printf("enter the value:");
	scanf("%hu",&n);
	int result=0;
	int reverse=rev(n,result);
 printf("Original: %u\n", n);
    printf("Reversed: %u\n", reverse);
	return 0;
}

