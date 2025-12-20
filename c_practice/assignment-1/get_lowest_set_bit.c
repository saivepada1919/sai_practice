#include <stdio.h>
int main(){
        int n,pos;
        printf("enter the n value : ");
        scanf("%d",&n);
        int size = sizeof(int)*8;
        for(int i = 0 ;i<size;i++){
                if((n>>i)&1){
                printf("Lowest set bit position : %d\n",i);
                break;
                }
        }
        return 0;
}
