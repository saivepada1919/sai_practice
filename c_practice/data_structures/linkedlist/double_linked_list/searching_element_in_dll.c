#include <stdio.h>
#include <stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *insert_at_fisrt(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
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
int search(struct node *head,int val){
	struct node *current = head;
	int found = 0;
	while(current != NULL){
		if(val == current->data){
			found = 1;
		}
		current = current->next;
	}
	return found;
}
int main(){
	struct node *head = NULL;
	head = insert_at_fisrt(head,60);
	head = insert_at_fisrt(head,50);
	head = insert_at_fisrt(head,40);
	head = insert_at_fisrt(head,30);
	head = insert_at_fisrt(head,20);
	head = insert_at_fisrt(head,10);
	int n;
	printf("enter the value to search : ");
	scanf("%d",&n);
	if(search(head,n)){
		printf("%d is presnt in the linked list \n",n);
	}
	else{
		printf("%d is not present in the linked list \n",n);
	}
	return 0;
}
