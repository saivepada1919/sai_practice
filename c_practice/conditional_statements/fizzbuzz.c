#include <stdio.h>
void fizzbuzz(){
	int n,i;
	printf("enter the range value :");
	scanf("%d",&n);
	for( i=1;i<=n;i++){
		if(i%3 ==0 && i%5==0){
                        printf("FizzBuzz\n");
		}
		else if (i%3==0){
			printf("Fizz\n");
		}
		else if(i%5==0){
			printf("Buzz\n");
		}
		else{
			printf("%d\n",i);
		}
		}
}
int main(){
	fizzbuzz();
	return 0;
}

