#include <stdio.h>
int main(){
        int n;
        printf("eneter the dec value:");
        scanf("%d",&n);
        char hexa[32];
	int i=0;
        while(n>0){
                int rem=n%16;
		if(rem<10){
			hexa[i]=rem+'0';
		}
		else{
			hexa[i]=rem-10+'A';
		}
		i++;
                n=n/16;
        }
        printf("hexa number:");
	for(int j=i-1;j>=0;j--){
		printf("%c",hexa[j]);
	}
	printf("\n");
        return 0;
}

