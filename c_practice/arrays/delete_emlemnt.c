#include <stdio.h>
int main(){
        int n;
        printf("enter the size of an array:");
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
                printf("%d ",a[i]);
        }
        printf("\n");
        int p;
        printf("enter the postion to delete:");
        scanf("%d",&p);
        for(int i=p-1;i<n-1;i++){
                a[i]=a[i+1];
        }
	a[n-1]=0;
        printf("after deleting new value:");
        for(int i=0;i<n;i++){
                printf("%d ",a[i]);
        }
        printf("\n");
        return 0;
}
