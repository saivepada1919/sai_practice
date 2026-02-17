#include <stdio.h>
int main(){
        int n;
        printf("enter the n value: ");
        scanf("%d",&n);
	int rev = 0;
	for(int i = 0;i<32;i++){
		rev  = rev <<1;
		rev |= n & 1;
		n >>= 1;
	}
	printf("after reverse the number : %d",rev);
}

