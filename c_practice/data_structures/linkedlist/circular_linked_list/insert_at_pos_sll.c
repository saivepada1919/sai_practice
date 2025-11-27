#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *head = NULL,*tail = NULL;
void insert_at_end(int data){
	struct node *temp = NULL,*current = NULL;
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
void insert_at_pos(int pos,int data){
	struct node *temp,*current=head,*ptr=NULL;
	temp =  malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(pos == 1){
		temp->next = head;
		head = temp;
		tail->next = head;

	}
	else{
		while(pos!=2){
			current = current->next;
			pos--;
		}
		if(current->next == head){
			current->next = temp;
			temp->next = head;
		}
		else{
			ptr = current->next;
			current->next = temp;
			temp->next = ptr;
			
		}
	}
}
void display(){
	struct node *current = head;
	while(1){
		printf("%d -> ",current->data);
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
		printf("enter the -1 to stop : ");
		scanf("%d",&n);
		if(n==-1)
			break;
		insert_at_end(n);
	}
	display();
	insert_at_pos(1,88);
	display();
	return 0;
}

