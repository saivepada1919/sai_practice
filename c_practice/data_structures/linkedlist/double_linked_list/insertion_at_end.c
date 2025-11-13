#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
};

struct node *insert_at_end(struct node *head,int data){
	struct node *temp = NULL,*current = NULL;
        temp =  malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		return head;
	}
	else{
		current = head;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = temp;
		temp->prev = current;
		return head;
	}
}

void print(struct node *head){
	struct node *current = NULL;
	current = head;
	while(current != NULL){
		printf("%d -> ",current->data);
		current = current->next;
	}
	printf(" NULL\n");
}
int main(){
	struct node *head = NULL;

	head = insert_at_end(head,10);
	print(head);
	
	head = insert_at_end(head,20);
	print(head);
	
	head = insert_at_end(head,30);
	print(head);
	
	head = insert_at_end(head,40);
	print(head);
	
	head = insert_at_end(head,50);
	print(head);

	return 0;
}
