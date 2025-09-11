#include <stdio.h>
int main(){
	int n;
	printf("enter the n value:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("array with multiple same  elements:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		if(count==1){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}
