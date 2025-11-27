#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next; 
};
struct node *head = NULL,*tail = NULL,*temp = NULL;
void insert_at_first(int data){
	temp =  malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
		tail->next = head;
	}
	else{
		temp->next = head;
		head = temp;
		tail->next = head;
	}
}
void insert_at_end(int data){
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
		tail->next = head;
	}
	tail->next = temp;
	temp->next = head;
	tail = temp;
}
void insert_at_pos(int pos,int data){
	struct node *temp2,*current = NULL;
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(pos == 1){
		insert_at_first(data);
	}
	else{
		current = head;
		while(pos != 2){
			temp2 = current;
			current = current->next;
			pos--;
		}
		if(current == tail->next){
			insert_at_end(data);
		}
		else{
			temp->next = current->next;
			current->next = temp;
		}
	}
}
int search(int data){
	int found = 0;
	temp = head;
	do{
		if(data == temp->data){
			found = 1;
		}
		temp = temp->next;
	}while(temp != tail->next);
	return found;
}
void display(){
	temp = head;
	do{
		printf("%d -> ",temp->data);
		temp = temp->next;
	}while(temp != tail->next);
	printf("\n");
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
//	display();
	insert_at_first(10);
//	display();
	insert_at_pos(4,30);
//	display();
	printf("enter the element to search : ");
	scanf("%d",&n);
	if(search(n)){
		printf("element found\n");
	}
	else{
		printf("not found\n");
	}
	return 0;
}

			

