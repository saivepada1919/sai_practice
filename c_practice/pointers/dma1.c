#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("enter the no.of elements:");
	scanf("%d",&n);
	int *ptr=(int*)malloc(n*sizeof(int));
	printf("enter the elements:");
	for (int i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	for(int i=n-1;i>=0;i--){
		printf("%d ",*(ptr+i));
	}
	printf("\n");
	return 0;
}


