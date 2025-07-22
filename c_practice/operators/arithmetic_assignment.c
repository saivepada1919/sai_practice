#include <stdio.h>
int main(){
	int x,y;
	 printf("enter the two inputs: ");
	 scanf("%d %d",&x,&y);
	 if (y==0){
		 printf("error division by 0\n");
		 return 1;
	 }
	 //arthmetic operators
	 printf("\n--- Basic Arithmetic ---\n");
         printf("Sum: %d\n", x + y);
         printf("Difference: %d\n", x - y);
         printf("Product: %d\n", x * y);
         printf("Quotient: %d\n", x / y);  
         printf("Remainder: %d\n", x % y);
         
	 //assignment operators
	 int a=x,b=y;
	 x +=y;
	 printf("\n--- Basic assignment ---\n");
	 printf("after x+=y :%d\n",x);
	 x -= y;
	 printf("after x -= y:%d\n",x);
	 x *= y;
	 printf("after x *= y:%d\n",x);
         x /= y;
	 printf("after x /= y:%d\n",x);
	 x %=  y;
         printf("after x -= y:%d\n",x);
	 return 0;
}


