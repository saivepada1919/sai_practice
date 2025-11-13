#include <stdio.h>
void scan(int arr[]){
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
}
void  print(int arr[]){
	printf("elements in array : ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[5];
	printf("enter the array elemnts : ");
	scan(arr);
	print(arr);
	return 0;
}
