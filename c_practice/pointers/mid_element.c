#include <stdio.h>
int *findmid(int a[],int n){
	return  &a[n/2];
}
int main(){
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int *mid   = findmid(a,n);
	printf("mid element:%d\n",*mid);
	return 0;
}
