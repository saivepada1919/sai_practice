#include <stdio.h>
int main(){
	int n;
	printf("enter the n value to build steps : ");
	scanf("%d",&n);
	int steps = 0;
	int coins = 0;
	for(int i=1;i<=n;i++){
		coins += i;
		if(coins <= n){
			steps++;
		}
	}
	printf("steps : %d\n",steps);
	return 0;
}

		
		

