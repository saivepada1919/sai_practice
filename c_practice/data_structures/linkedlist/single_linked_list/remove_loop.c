#include <stdio.h>
#include <stdlib.h>
struct node {
	int data ;
	struct node *next;
};
struct node *insert_at_end(struct node *head,int data){
	struct node *temp,*current;
	temp = malloc(sizeof(struct node));
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
		return head;
	}
}
int detectloop(struct node *head){
	struct node *slow=head,*fast=head;
	while(fast!=NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(fast == slow){
			break;
		}
	}
	if(fast == NULL || fast->next == NULL){
		return 0;
	}
	slow = head;

	while(slow->next != fast->next){
		slow = slow->next;
		fast = fast->next;
	}
	fast->next = NULL;
	return 1;
}

int main(){
	struct node *head = NULL,*current = NULL;
	head = insert_at_end(head,1);
	head = insert_at_end(head,2);
	head = insert_at_end(head,3);
	head = insert_at_end(head,4);
	head = insert_at_end(head,5);
	head = insert_at_end(head,6);
	current = head;
	while(current->next != NULL){
		current = current->next;
	}
	current->next = head->next->next;
	if (detectloop(head)){
		printf("Loop detected and removed successfully!\n");
	}
	else{
		printf("No loop found in the linked list.\n");
	}
	current = head;
	while(current != NULL){
		printf("%d -> ",current->data);
		current = current->next;
	}
	printf("NULL\n");
	return 0;
}

