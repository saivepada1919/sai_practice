#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};

struct node *insert_at_end(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
	struct node *current = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head=temp;
	}
	else{
		current = head;
		while(current->next!=NULL){	
			current = current->next;
		}
		current->next = temp;
	}
	return head;
}
struct node *insert_at_begining(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
	struct node *current = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
	}
	else{
		temp->next = head;
		head = temp;
	}
	return head;
}
struct node *delete
void print(struct node *head){
	struct node *current = head;
	while(current!=NULL){
		printf("%d -> ",current->data);
		current = current->next;
	}
	printf("NULL\n");
}




int main(){
	struct node *head = NULL;
	head =insert_at_end(head,10);
	head = insert_at_end(head,20);
	head = insert_at_end(head,30);
	head = insert_at_end(head,40);
	print(head);
	head = insert_at_begining(head,1);
	head = insert_at_begining(head,2);
	head = insert_at_begining(head,3);

	print(head);
	return 0;
}
