#include <stdio.h>
int main(){
        int n;
        printf("enter the number:");
        scanf("%d",&n);
        if (n>0){
                for(int i=1;i<=n;i++){
                        for(int j=1;j<=i;j++){
                                printf("%d ",i);
                        }
                        printf("\n");
                }
        }
                else{
                        printf("invalid input\n");
                }
        return 0;
}
