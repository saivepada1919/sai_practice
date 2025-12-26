#include <stdio.h>
int main(){
	int a = 0;
	int b = 1;
	int n,k=0;
	printf("enter the n value : ");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		if(a>n){
			break;
		}
			int temp = a+b;
			a = b;
			b = temp;
			k++;
	}
	for(int i = 0;i<k;i++){
		int temp = b-a;
		b = a;
		a = temp;
		if(a!=0){
		printf("%d ",temp);
		}
	}
	printf("\n");
}
