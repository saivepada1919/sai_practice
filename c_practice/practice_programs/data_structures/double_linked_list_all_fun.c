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
	}
	else{
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
	}
}
void insert_at_first(int data){
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
	}
	else{
		head->prev = temp;
		temp->next = head;
		head = temp;
	}
}
void insert_at_pos(int pos,int data){
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(pos == 1){
		insert_at_first(data);
		return;
	}
	else{
		struct node *temp2=NULL;
		temp2 = head;
		while(pos != 2){
			temp2 = temp2->next;
			pos--;
		}
		if(temp2 == NULL){
			insert_at_end(data);
			return;
		}
		else{
			temp->next = temp2->next;
			temp->prev = temp2;
			temp2->next = temp;
		}
	}
}	
void delete_at_first(){
	temp = head;
	head = head->next;
	head->prev = NULL;
	free(temp);
	temp = NULL;
}
void delete_at_end(){
	temp = tail;
	tail = tail->prev;
	tail->next = NULL;
	free(temp);
	temp = NULL;
}
void delete_at_pos(int pos){
	if(pos == 1){
		delete_at_first();
		return;
	}
	else{
		temp = head;
		struct node *ptr = NULL;
		while(pos!=1){
			temp = temp->next;
			pos--;
		}
		if(temp == NULL){
			delete_at_end();
			return;
		}
		else{
			ptr = temp->prev;
			ptr->next = temp->next;
			free(temp);
			temp = NULL;
		}
				
	}
}
void searching(int data){
	temp = head;
	int found = 0;
	while(temp!=NULL){
		if(temp->data == data){
			printf("Found element in linked list\n");
			found = 1;
			break;
		}
	}
	if(!(found)){
		printf("not found\n");
	}
}
void sorting(){
	struct node *i=NULL,*j=NULL;
	for(i = head;i->next != NULL;i = i->next){
		for(j = head;j->next!=NULL;j = j->next){
			if(j->data > j->next->data){
				int temp = j->data;
				j->data = j->next->data;
				j->next->data = temp;
			}
		}
	}
}
void reverse(){
	struct node *current=NULL;
	current=head;
	while(current!=NULL){
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
	}
	head = temp->prev;
}
void display(){
	temp = head;
	while(temp != NULL){
		printf("%d -> ",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
int main(){
	int data,choice,pos;
	while(1){
		printf("1.Insert at first\n");
		printf("2.Insert at end\n");
		printf("3.Insert at position\n");
		printf("4.Delete at first\n");
		printf("5.Delete at end\n");
		printf("6.Delete at position\n");
		printf("7.Search element\n");
		printf("8.Sorting Linked list\n");
		printf("9.Reverese linked list\n");
		printf("10.Display\n");
		printf("11.Exit\n");
		printf("enter youy choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter the data : ");
				scanf("%d",&data);
				insert_at_first(data);
				break;
			case 2:
				printf("enter the data : ");
				scanf("%d",&data);
				insert_at_end(data);
				break;
			case 3:
				printf("enter the position : ");
				scanf("%d",&pos);
				printf("enter the data : ");
				scanf("%d",&data);
				insert_at_pos(pos,data);
				break;
			case 4: 
				delete_at_first();
				break;
			case 5: 
				delete_at_end();
				break;
			case 6: 
				printf("enter the pos : ");
				scanf("%d",&pos);
				delete_at_pos(pos);
				break;
			case 7:
				printf("enter the data to search : ");
				scanf("%d",&data);
				searching(data);
				break;
			case 8:
				sorting();
				break;
			case 9:
				reverse();
				break;
			case 10:
				display();
				break;
			case 11:
				printf("THANKYOU\n");
				return 0;
			default:
				printf("invalid input\n");
		}
	}
	return 0;
}




