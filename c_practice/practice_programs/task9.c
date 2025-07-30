#include <stdio.h>
int main(){
        int n,rev=0;
        printf("enter the value:");
        scanf("%d",&n);
	int temp=n;
        while(n!=0){
                int m=n%10;
                rev=rev * 10+n%10;
		n/=10;
        }
	if(rev==temp){
		printf("%d is pailndrome\n",rev);
	}
	else
	{
		printf("%d not palindrome\n",rev);
	}
        return 0;
}
