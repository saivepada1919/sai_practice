#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *head = NULL,*tail = NULL,*temp = NULL;
void insert_at_end(int data){
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
		tail->next = head;
	}
	else{
		tail->next = temp;
		temp->next = head;
		tail = temp;
	}
}
void delete_at_end(){
	struct node *temp2 = NULL;
	temp = head;
	while(temp->next != head){
		temp2 = temp;
		temp = temp->next;
	}
	temp2->next = head;
	tail = temp2;
	free(temp);
}
void display(){
	temp = head;
	do{
		printf("%d ->",temp->data);
		temp = temp->next;
	}while(temp != tail->next);
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
	delete_at_end();
	display();
	return 0;
}
