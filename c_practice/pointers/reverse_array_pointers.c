#include <stdio.h>
void reverse(int *start,int *end){
 while(start<end){
                int temp=*start;
                *start=*end;
                *end=temp;
                start++;
                end--;
        }
}
int main()
{
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("original array:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	int *start = a;
	int *end = &a[n-1];
	reverse(a,&a[n-1]);
	printf("reversed array:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}


