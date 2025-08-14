#include <stdio.h>
int main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int temp=0;
	int a[n];
	for(int i=0;i<n;i++){
		printf("enter the %d element:\n",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
		if(temp<a[i]){
			temp=a[i];
		}
	}
	printf("\nMax value:%d\n",temp);
	return 0;
}

	
	
