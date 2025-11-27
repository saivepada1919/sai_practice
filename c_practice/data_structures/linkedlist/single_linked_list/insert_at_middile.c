#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *head = NULL,*tail = NULL;
void insert_at_end(int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
	}
	else{
		tail->next = temp;
		tail = temp;
	}
}
int count(){
	struct node *current = head;
	int num = 0;
	while(current != NULL){
		num++;
		current =  current->next;
	}
	return num;
}
void insert_at_middle(int data,int m){
	struct node *temp ,*current = head,*ptr = NULL;
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	int c = 1;
	while(c<=m){
		c++;
		ptr = current;
		current = current->next;
	}
	ptr->next = temp->next;
	temp->next = current;
}
void display(){
	struct node *current =  head;
	while(current != NULL){
		printf("%d -> ",current->data);
		current = current->next;
	}
	printf("\n");
}


int main(){
	int n;
	printf("enter elements to stop -1: \n");
	while(1){
		scanf("%d",&n);
		if(n == -1){
			break;
		}
		insert_at_end(n);
	}
	int c = count();
	c =  c/2;
	insert_at_middle(50,c);
	display();
	return 0;
}
