#include <stdio.h>
int main(){
	int a,b;
	printf("enter the values befor sawping :");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping the values a=%d and b=%d\n",a,b);
	return 0;
}
