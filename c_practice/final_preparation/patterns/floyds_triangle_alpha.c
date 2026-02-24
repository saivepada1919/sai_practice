#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	char a = 'A';
	for(int i =1;i<=n;i++){
		for(int j = 1;j<=i;j++){
			printf("%c  ",a++);
		}
		printf("\n");
	}
}
