#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

int main(){
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data = 50;
	head->link = NULL;

	struct node* current= (struct node*)malloc(sizeof(struct node));
	current->data = 60;
	head->link=current;
	current->link = NULL;
	
	current= (struct node*)malloc(sizeof(struct node));
        current->data = 70;
        current->link = NULL;

	head->link->link = current;



/*	struct node* current2= (struct node*)malloc(sizeof(struct node));
        current2->data = 30;
        current->link=current2;
        current2->link = NULL;   */


	struct node *temp = head;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->link;
	}
	printf("NULL\n");
	return 0;
}
