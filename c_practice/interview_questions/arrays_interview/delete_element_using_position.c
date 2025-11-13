#include <stdio.h>
int main(){
	int n=5;
	int arr[5]={1,2,3,4,5};
	int pos;
	printf("before delete elements : ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\nenter the position : ");
	scanf("%d",&pos);
	for(int i=pos;i<5;i++){
		arr[i]=arr[i+1];
	}
	n--;
	printf("after delete the elements : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
