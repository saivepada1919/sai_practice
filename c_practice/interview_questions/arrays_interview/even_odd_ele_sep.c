#include <stdio.h>
int main(){
	int arr[10];
	printf("enter the elements:");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("before separate elements");
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	int even[10];
	int odd[10];
	int c=0,d=0;
	for(int i=0;i<10;i++){
		if(arr[i]%2==0){
			even[c]=arr[i];
			c++;
		}
		else{
			odd[d]=arr[i];
			d++;
		}
	}
	printf("even numbers in array: ");
	for(int i=0;i<c;i++){
		printf("%d ",even[i]);
	}
	printf("\n");
	printf("odd numbers in array: ");
        for(int i=0;i<d;i++){
                printf("%d ",odd[i]);
        }
        printf("\n");
	return 0;
}

