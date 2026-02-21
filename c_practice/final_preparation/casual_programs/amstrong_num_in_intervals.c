#include <stdio.h>
int power(int b,int p){
	int res = 1;
	for(int i = 1;i<=p;i++){
		res *= b;
	}
	return res;
}
int amstrong(int n){
        if(n >= 1 && n <= 9){
                return n;
        }
	int temp = n;
	int digits = 0;
	while(temp != 0){
		digits++;
		temp /= 10;
	}
        int sum = 0;
        while(n != 0){
                int rem = n % 10;
                sum = sum + power(rem,digits);
                n /= 10;
        }
        return sum;
}

int main(){
        int start,end;
        printf("enter the starting value : ");
        scanf("%d",&start);
        printf("enter the ending value : ");
        scanf("%d",&end);
        for(int i = start;i<=end;i++){
                int res = amstrong(i);
                if(res == i){
                        printf("%d ",i);
                }
        }
        printf("\n");
        return 0;
}
