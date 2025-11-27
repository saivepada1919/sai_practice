#include <stdio.h>
#include <stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head = NULL,*tail = NULL;
void insert_at_end(int data){
	struct node *temp,*current = NULL;
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
	}
	else{
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
	}
}
void reverse(){
	struct node *temp = NULL,*current = head;
	while(current != NULL){
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
	}
	if(temp != NULL){
		head = temp->prev;
	}
}
void print(){
	struct node *current = head;
	while(current != NULL){
		printf("-> %d ",current->data);
		current = current->next;
	}
	printf("\n");
}
		
		

int main(){
	int n;
	while(1){
		printf("enter the n value to stop -1 : ");
		scanf("%d",&n);
		if(n == -1)
			break;
		insert_at_end(n);
	}
	print();
	reverse();
	print();
}

