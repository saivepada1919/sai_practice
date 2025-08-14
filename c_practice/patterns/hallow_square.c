#include <stdio.h>
void hallow(int n){
	int i,j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

}
int main(){
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	hallow(n);
	return 0;
}
