#include <stdio.h>
struct book{
	char title[50];
	char author[50];
	int price;
};
int main(){
	struct book b;
	printf("Enter the book title:");
	scanf(" %[^\n]",b.title);
	printf("Enter the author name:");
	scanf(" %[^\n]",b.author);
	printf("Enter the price of the book:");
	scanf("%d",&b.price);
	printf("\n----------------BOOK DETAILS----------------\n");
	printf("      Book Title:%s\n",b.title);
	printf("      Book Author:%s\n",b.author);
	printf("      Book price:%d\n",b.price);
	return 0;
}

