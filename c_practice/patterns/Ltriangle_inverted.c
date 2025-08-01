#include <stdio.h>
int main(){
        int n;
        printf("enter the number:");
        scanf("%d",&n);
        if (n>0){
                for(int i=n;i>=1;i--){
                        for(int j=1;j<=i;j++){
                                printf("* ");
                        }
                        printf("\n");
                }
        }
                else{
                        printf("invalid input\n");
                }
        return 0;
}
