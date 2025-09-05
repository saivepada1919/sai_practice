#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("enter th size of memory:");
	scanf("%d",&n);
	int *ptr=calloc(n,sizeof(int));
	printf("enter the elemnents:");
	for (int i=0;i<n/2;i++){
		scanf("%d",ptr+i);
	}
	printf("elements in array:");
	for(int i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
	printf("\n");
	free(ptr);
	return 0;
}

