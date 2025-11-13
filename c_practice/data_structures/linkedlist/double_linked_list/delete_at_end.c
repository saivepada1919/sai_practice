#include <stdio.h>
#include <stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *insert_at_first(struct node *head,int data){
	struct node *temp = NULL;
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		return head;
	}
	else{
		head->prev = temp;
		temp->next = head;
		head = temp;
		return head;
	}
}
struct node *delete_at_end(struct node *head){
	struct node *temp = NULL,*temp2=NULL;
	temp = head;
	while(temp->next != NULL){
		temp2 = temp;
		temp = temp->next;
	}
	temp2->next = NULL;
	free(temp);
	return head;
}
void print(struct node *head){
	struct node *current = head;
	while(current != NULL){
		printf("%d -> ",current->data);
		current = current->next;
	}
	printf("\n");
}
	

int main(){
	struct node *head = NULL;
	head = insert_at_first(head,60);
	print(head);
	head = insert_at_first(head,50);
	print(head);
	head = insert_at_first(head,40);
	print(head);
	head = insert_at_first(head,30);
	print(head);
	head = insert_at_first(head,20);
	print(head);
	head = insert_at_first(head,10);
	print(head);
	head = delete_at_end(head);
	print(head);
}
