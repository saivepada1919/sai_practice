#include <stdio.h>
int main(){
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			/* if(i==1 ||j==n|| j==i){  
			      printf("*");
			}
			else{
				printf(" ");
			}  */
			printf("*");
		}
		for(int j=1;j<=2*(i-1);j++){
			printf(" ");
		}
		for(int j=i;j<=n;j++){
			/* if(i==1||j==n||j==i){
			    printf("*");
			}
			else{
				printf(" ");
			} */
			printf("*");
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
                       /* if(j==1||j==i||i==n){
                            printf("*");
                        }
                        else{
                                printf(" ");
                        } */
			printf("*");
		}
		for(int j=1;j<=2*(n-i);j++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
                       /* if(j==1||j==i||i==n){
                            printf("*");
                        }
                        else{
                                printf(" ");
                        } */
			printf("*");
		}
		printf("\n");
	}
}
