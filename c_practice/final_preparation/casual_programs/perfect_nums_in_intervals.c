#include <stdio.h>
int perfect(int n){
	if(n == 1){
		return 0;
	}
	int res = 0;
	for(int i =1;i<n;i++){
		if(n %i ==0){
			res += i;
		}
	}
	return res;
}

int main(){
	int start,end;
	printf("enter the starting value : ");
	scanf("%d",&start);
	printf("enter the ending value : ");
	scanf("%d",&end);
	for(int i=start;i<=end;i++){
		int res = perfect(i);
		if(res == i){
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
