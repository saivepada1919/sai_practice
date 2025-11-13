#include <stdio.h>
int main(){
	int n1,n2;
	printf("enter the sizes of array : ");
	scanf("%d %d",&n1,&n2);
	int arr1[n1],arr2[n2],arr3[n1+n2];
	printf("enter the elements in first array : ");
	for(int i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("enter the elements in second array : ");
	for(int i=0;i<n2;i++){
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<n1;i++){
		arr3[i]=arr1[i];
	}
	for(int i=0;i<n2;i++){
		arr3[n1+i] = arr2[i];
	}
	printf("merged array : ");
	for(int i=0;i<n1+n2;i++){
		printf("%d ",arr3[i]);
	}
	printf("\n");
	return 0;
}


