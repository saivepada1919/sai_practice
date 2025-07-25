#include <stdio.h>
int main(){
	int n,rev=0,original;
	n =original;
	printf("enter the value");
	scanf("%d",&n);
	original=n;
	while (n != 0){
		rev =rev *10 + n %10;
		n /=10;
	}
	if (rev == original){
		printf("it is palindrome\n");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
}
