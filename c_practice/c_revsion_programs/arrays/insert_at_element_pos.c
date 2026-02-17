#include <stdio.h>
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements : ");
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int pos,ele;
	printf("enter the pos : ");
	scanf("%d",&pos);
	printf("enter the element : ");
	scanf("%d",&ele);
	for(int i=n-1;i>=pos;i--){
		arr[i+1] = arr[i];
	}
	arr[pos] = ele;
	printf("after inserting element : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
