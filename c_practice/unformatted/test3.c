#include <stdio.h>

int main(){
	int a,b;
	char c;
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("enter the operator(*,?,+,-): ");
	scanf(" %c",&c);
	switch (c){
		case '+':
			printf("you choose to add %d and %d\n",a,b);
			break;
		case '-':
			printf("you choose to sub %d and %d\n",a,b);
                        break;
		case '*':
			printf("you choose tomul %d and %d\n",a,b);
                        break;
		case '/':
			if(b != 0){
		        printf("you choose to div %d and %d\n",a,b);
			}else{
				printf("error");
			}
                        break;
		default:
			printf("not an operator\n");
	}
	return 0;
}
