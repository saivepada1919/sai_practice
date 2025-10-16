#include <stdio.h>
int main(){
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,10};
	int *ptr1=arr1;
	int *ptr2=arr2;
	printf("before swapping arr[1]: ");
	for(int i=0;i<5;i++){
		printf("%d ",*(ptr1+i));
	}
	printf("\n");
	printf("before swapping arr[2]: ");
        for(int i=0;i<5;i++){
                printf("%d ",*(ptr2+i));
        }
	printf("\n");
	for(int i=0;i<5;i++){
		int temp = *(ptr1+i);
		*(ptr1+i) = *(ptr2+i);
		*(ptr2+i) = temp;
	}
	printf("after swapping arr[1]: ");
        for(int i=0;i<5;i++){
                printf("%d ",*(ptr1+i));
        }
        printf("\n");
        printf("after swapping arr[2]: ");
        for(int i=0;i<5;i++){
                printf("%d ",*(ptr2+i));
        }
	printf("\n");
	return 0;
}
