#include <stdio.h>
int main(){
	int n;
	printf("enter the size of an array:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	int p,v;
	printf("enter the postion to change:");
	scanf("%d",&p);
	printf("enter the element value:");
	scanf("%d",&v);
	for(int i=n-1;i>=p;i--){
		a[i+1]=a[i];
	}
	a[p]=v;
	printf("after inserting new value:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

