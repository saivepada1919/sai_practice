#include <stdio.h>
int main(){
	int start,end,i,j;
	printf("enter the range for print prime numbers: ");
	scanf("%d%d",&start,&end);
	if(start <2){
		start=2;
	}

	for (i=start;i<=end;i++){
		int count =0;
		for (j=1;j<=i;j++){
			if (i%j==0){
				count++;
			}
			}
		if(count==2){
		printf("%d\n",i);
		}
		}
	printf(" \n");
	return 0;
}

