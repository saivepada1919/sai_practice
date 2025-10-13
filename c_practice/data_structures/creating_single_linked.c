#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* link;
};

int main(){
	struct node *head = NULL;
	head = (struct node *) malloc(sizeof(struct node));
        printf("enter the data value:");
	scanf("%d",&head->data);

	head->link = NULL;

	printf("%d->%p\n",head->data,head->link);

	return 0;
}
