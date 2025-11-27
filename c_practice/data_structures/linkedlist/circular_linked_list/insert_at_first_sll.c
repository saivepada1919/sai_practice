#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *head = NULL,*tail = NULL;
void insert_at_first(int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
		head->next = tail->next = temp;
	}
	else{
		temp->next = head;
		tail->next = temp;
		head = temp;
	}
}
void display(){
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
	int n;
	while(1){
		printf("enter -1 to stop : ");
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		insert_at_first(n);
	}
	display();
}

