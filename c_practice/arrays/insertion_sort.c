#include <stdio.h>
int main(){
	int n;
	printf("enter the size of an array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n;i++){
		int temp=a[i];
		int j=i-1;
		while(j>=0 && a[j]>temp){
				a[j+1]=a[j];
				j=j-1;
			}
		a[j+1]=temp;
	}
	printf("after sorting:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

