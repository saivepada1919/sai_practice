#include <stdio.h>
int main(){
	char eq[10];
	printf("enter the equation:");
	fgets(eq,10,stdin);
	int a,x;
	char sign;
	if(eq[0] == 'x'){
		sscanf(eq,"x%c%d=0",&sign,&a);
		if(sign== '-'){
			x=a;
		}
		else{
			x=-a;
		}
	}
	else{
		sscanf(eq,"%d%cx=0",&a,&sign);
		if(sign == '-'){
			x=a;
		}
		else{
			x=-a;
		}
	}
	printf("value of x = %d\n",x);
	return 0;
}

