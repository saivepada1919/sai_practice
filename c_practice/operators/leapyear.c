#include <stdio.h>
void leap(){
	int x;
	printf("enter the year: ");
	scanf("%d",&x);
		(x % 4 == 0 && (x % 100 != 0 || x % 400 == 0))?printf("%d leap year \n ",x):printf("%d is not leap year\n",x);
}
int main(){
	leap();
	return 0;
}

