#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	int n;
	printf("size of array:");
	scanf("%d",&n);
	char a[n];
	printf("enter the binary digits");
	scanf("%s",a);
	int s=strlen(a);
	int sum=0;
	for(int i=0;i<s;i++){
		if(a[i]=='1')
		    sum+=pow(2,s-1-i);
	}
	printf("decimal number:%d",sum);
}
