#include <stdio.h>
int main(){
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the  elelments : ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int *p=a;
	printf(" the  elelments are in array: ");
        for(int i=0;i<n;i++){
                printf("%d ",*(p+i));
        }
	printf("\n");
	return 0;
}

