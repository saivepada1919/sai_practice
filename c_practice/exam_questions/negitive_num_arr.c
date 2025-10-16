#include <stdio.h>
int main(){
	int arr[10];
	printf("enter the numbers : ");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("before printing negitive numbers:");
        for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	int neg[10];
	int c=0;
	for(int i=0;i<10;i++){
		if(arr[i]<0){
			neg[c]=arr[i];
			c++;
		}
	}
	printf("negitive elements in given array:");
	for(int i=0;i<c;i++){
		printf("%d ",neg[i]);
	}
	printf("\n");
	return 0;
}
