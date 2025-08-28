#include <stdio.h>
#include <string.h>
int main(){
	char s[20];
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	sprintf(s,"the value is %d",n);
	printf("%s\n",s);
	return 0;
}
