#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *head = NULL,*tail = NULL;
void insert_at_end(int data){
	struct node *temp;
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
		temp->next = head;
	}
	else{
		tail->next = temp;
		temp->next = head;
		tail = temp;
	}
}
void delete_at_first(){
	struct node *temp = NULL;
	temp = head;
	head = head->next;
	tail->next = head;
	free(temp);
}
void display(){
	struct node *current = head;
	do{
		printf("%d -> ",current->data);
		current = current->next;
	}while(current != tail->next);
	printf("\n");
}
int main(){
	int n;
	while(1){
		printf("enter data : ");
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		insert_at_end(n);
	}
	display();
	delete_at_first();
	display();
}
