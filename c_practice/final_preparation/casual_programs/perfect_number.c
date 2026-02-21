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
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int res = perfect(n);
	if(res == n){
		printf("Perfect Number\n");
	}
	else{
		printf("Not Perfect Number\n");
	}
	return 0;
}

