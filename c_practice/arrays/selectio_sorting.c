#include <stdio.h>
int main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	int a[n];
	printf("enter the elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("orginal array:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");

	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]< a[min]){
				min=j;
			}
		}
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
	}
	printf("selection sorting: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

