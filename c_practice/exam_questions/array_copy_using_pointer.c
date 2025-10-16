#include <stdio.h>
int main(){
	int arr1[5];
	int arr2[5];
	printf("enter the elments: ");
	for(int i=0;i<5;i++){
		scanf("%d",&arr1[i]);
	}
	int *s=arr1;
	int *d=arr2;
	for(int i=0;i<5;i++){
		*(d+i)=*(s+i);
	}
	printf("after copied form one arr1 to arr2:\n ");
	for(int i=0;i<5;i++){
		printf("%d ",*(d+i));
	}
	printf("\n");
	return 0;
}

