#include <stdio.h>
#include <stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head = NULL,*tail = NULL,*temp = NULL;
void insert_at_end(int data){
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
		tail->next = head;
		head->prev = tail;
	}
	else{
		tail->next = temp;
		temp->prev = tail;
		temp->next = head;
		head->prev = temp;
		tail = temp;

	}
}
void insert_at_first(int data){
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	temp->next = head;
	temp->prev = tail;
	head->prev = temp;
	tail->next = temp;
	head = temp;
}
void insert_at_pos(int pos,int data){
	struct node *current = head,*temp2 = NULL;
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(pos == 1){
		insert_at_first(data);
	}
	else{
		while(pos!=2){
			current = current->next;
			pos--;
		}
		if(current == tail){
			insert_at_end(data);
		}
		else{
			temp2 = current->next;
			temp2->prev = temp;
			current->next = temp;
			temp->next = temp2;
			temp->prev = current;
		}
	}
}
void delete_at_first(){
	temp = head;
	head = head->next;
	head->prev = tail;
	tail->next = head;
	free(temp);
}
void delete_at_end(){
	temp = tail;
	tail = tail->prev;
	tail->next = head;
	head->prev = tail;
	free(temp);
}
void display(){
	temp = head;
	do{
		printf("%d -> ",temp->data);
		temp = temp->next;
	}while(temp != tail->next);
	printf("\n");
}
void delete_at_pos(int pos){
	struct node *ptr1 = NULL;
	if(pos == 1){
		delete_at_first();
	}
	else{
		temp = head;
		while(pos!=1){
			temp = temp->next;
			pos--;
		}
		if(temp == tail->next){
			delete_at_end();
		}
		else{
			ptr1 = temp->prev;
			ptr1->next = temp->next;
			temp->next->prev = ptr1;
			free(temp);
		}
	}
}


int main(){
	int n;
	while(1){
		printf("enter data : ");
		scanf("%d",&n);
		if(n == -1){
			break;
		}
		insert_at_end(n);
	}
	display();
	insert_at_first(100);
	display();
	insert_at_pos(3,200);
	display();
	delete_at_first();
	display();
	delete_at_end();
	display();
	delete_at_pos(4);
	display();
	delete_at_end();
	display();
	delete_at_pos(4);
	display();
	return 0;
}
