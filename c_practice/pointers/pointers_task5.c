#include <stdio.h>
void increment(int *m,int n){
	printf("enter the elments:");
        for(int i=0;i<n;i++){
                scanf("%d",m+i);
        }
        printf("orginal elements in array :");
        for(int i=0;i<n;i++){

                printf("%d ",*(m+i));
        }
        printf("\n");
	printf("increment by 5 elements in array :");
        for(int i=0;i<n;i++){
                printf("%d ",*(m+i)+5);
        }
        printf("\n");
}
int main(){
	int n;
	printf("enter the size of an array:");
	scanf("%d",&n);
	int a[n];
	int *p=a;
        increment(a,n);
	return 0;

}
