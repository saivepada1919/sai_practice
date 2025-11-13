#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
int detectloop(struct node *head){
	struct node *slow = head;
	struct node *fast = head;
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast){
			return 1;
		}
	}
	return 0;
}
struct node *insert_at_end(struct node *head,int data){
	struct node *temp,*current=NULL;
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
		current->next  = temp;
		return head;
	}
}

	
int main(){
	struct node *head = NULL,*current = NULL;
	head = insert_at_end(head,1);
	head = insert_at_end(head,2);
	head = insert_at_end(head,3);
	head = insert_at_end(head,4);
	head = insert_at_end(head,5);
	current = head;
	while(current->next != NULL){
		current = current->next;
	}
	current->next = head->next->next;
	int loop = detectloop(head);
	if(loop){
		printf("loop detected in the linked list\n");
	}
	else{
		printf("No loop int the linked list\n");
	}
	return 0;
}

