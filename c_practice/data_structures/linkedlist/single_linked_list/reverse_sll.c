#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};
struct node *insert_at_end(struct node *head,int data){
	struct node *temp=malloc(sizeof(struct node));
	struct node *current=NULL;
        temp->data = data;
	temp->link=NULL;
	if(head==NULL){
		head = temp;
		return head;
	}
	else{
		current = head;
		while(current->link!=NULL){
			current=current->link;
		}
		current->link=temp;
		return head;
	}
}

struct node *reverse_sll(struct node *head){
	struct node *ptr1 = NULL, *ptr2 = NULL;
	while(head != NULL){
		ptr1 = head->link;
		head->link = ptr2;
		ptr2 = head;
		head = ptr1;
	}
	return ptr2;
}


void print(struct node *head){
	struct node *current=head;
	while(current !=NULL){
		printf("%d -> ",current->data);
		current=current->link;
	}
	printf(" NULL\n");
}

int main(){
	struct node * head=NULL;
	head = insert_at_end(head,10);
	head = insert_at_end(head,20);
	head = insert_at_end(head,30);
	head = insert_at_end(head,40);
	head = insert_at_end(head,50);
	head = insert_at_end(head,60);
        printf("nodes in single linked list:\n");
	print(head);
	printf("aftre reverse the nodes in single linked list:\n");
	head = reverse_sll(head);
	print(head);
	return 0;
}
		



