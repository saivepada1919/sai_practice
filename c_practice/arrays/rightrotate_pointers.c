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
void rightRotate(int *a, int n, int k){
        k=k%n;
        reverse(a + n-k, a + n - 1);
	reverse(a, a + n - k -1);	
	reverse(a, a + n - 1);
}
int main(){
        int n;
        printf("enter the size of array:");
        scanf("%d",&n);
        int a[n];
        int *p=a;
        printf("enter the elements:");
        for(p=a;p<&a[n];p++){
                scanf("%d",p);
        }
        printf("elemnts in array:");
        for(p=a;p<&a[n];p++){
                printf("%d ",*p);
        }
        printf("\n");
        int k;
        printf("enter no of positions to shift:");
        scanf("%d",&k);
        rightRotate(a,n,k);
        printf("after left rotate :");
        for(p=a;p<&a[n];p++){
                printf("%d ",*p);
        }
        printf("\n");
        return 0;
}
