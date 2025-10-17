#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node* prev;
	int data;
	struct node* next;
};

struct node *insert_at_begining(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		return head;
	}
	else{
		temp->next = head;
		head->prev = temp;
		head = temp;
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
	printf("NULL\n");
}
	

int main(){
	struct node *head = NULL;
	head = insert_at_begining(head,10);
	print(head);
	
	head = insert_at_begining(head,20);
	print(head);
	
	head = insert_at_begining(head,30);
	print(head);

	head = insert_at_begining(head,40);
	print(head);
	
	return 0;
}
