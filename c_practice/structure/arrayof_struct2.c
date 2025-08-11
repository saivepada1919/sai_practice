#include <stdio.h>
struct products{
	char name[50];
	float price;
	int quantity;
};
int main(){
	int n;
	printf("enter the no of products:");
	scanf("%d",&n);
	struct products p[n];
	for(int i=0;i<n;i++){
		printf("enter the name of product %d: ",i+1);
		scanf(" %[^\n]",p[i].name);
		printf("enter the price of product %d: ",i+1);
		scanf("%f",&p[i].price);
		printf("enter the quantity of product %d: ",i+1);
		scanf("%d",&p[i].quantity);
	}
	printf("%-10s %-10s %-10s\n", "Name", "Price","Quantity");
        printf("-------------------------------------\n");
        for(int i=0;i<n;i++){
		printf("%-10s %-10.2f %-10d\n",p[i].name,p[i].price,p[i].quantity);
	}
	return 0;
}
