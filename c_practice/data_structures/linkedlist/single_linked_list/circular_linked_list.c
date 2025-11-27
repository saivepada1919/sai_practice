#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *tail  = NULL;
struct node *insert_at_first(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
		head->next = tail->next = head;
	}
	else{
		temp->next = head;
		tail->next = temp;
		head = temp;
	}
	return head;
}
void display(struct node *head){
	struct node *current = head;
	while(1){
		printf("-> %d",current->data);
		current = current->next;
		if(current == head){
			break;
		}
	}
	printf("\n");
}

int main(){
	struct node *head = NULL;
	int n;
	while(1){
		printf("enter the value if n value is -1 to stop enter values : ");
		scanf("%d",&n);
		if(n == -1)
			break;
		head = insert_at_first(head,n);
	}
	display(head);
}
