#include <stdio.h>
int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int b=sizeof(a)/sizeof(a[0]);
	int c[b];
	for(int i=0;i<b;i++){
		c[i]=a[b-1-i];
		printf("%d",c[i]);
	}
	printf("%d",c[0]);
	printf("\n");
}
