#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
struct node *temp = NULL;

void insert_at_end(int data){
	temp = malloc(sizeof(struct node));
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
void insert_at_first(int data){
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
	}
	else{
		temp->next = head;
		head = temp;
	}
}
void insert_at_pos(int pos,int data){
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(pos == 1){
		insert_at_first(data);
		return;
	}
	else{
		struct node *temp1 = head;
		while(pos != 2){
			temp1 = temp1->next;
			pos--;
		}
		if(temp1 == NULL){
			insert_at_end(data);
			return;
		}
		else{
			temp->next = temp1->next;
			temp1->next = temp;
		}
	}
}	
void delete_at_first(){
	temp = head;
	head = head->next;
	free(temp);
	temp = NULL;
}

void delete_at_end(){
	struct node *temp2 = NULL;
	temp = head;
	while(temp->next != NULL){
		temp2 = temp;
		temp = temp->next;
	}
	temp2->next = NULL;
	tail = temp2;
	free(temp);
	temp = NULL;
}
void delete_at_pos(int pos){
	struct node *temp2 = NULL;
	if(pos == 1){
		delete_at_first();
		return;
	}
	else{
		temp = head;
		while(pos != 1){
			temp2 = temp;
			temp = temp->next;
			pos--;
		}
		if(temp->next == NULL){
			delete_at_end();
			return;
		}
		else{
			temp2->next = temp->next;
			free(temp);
			temp = NULL;
		}
	}
}
void search(int data){
	temp = head;
	int found = 0;
	while(temp!=NULL){
		if(temp->data == data){
			printf("found\n");
			found = 1;
			break;
		}
		temp = temp->next;
	}
	if(!found){
		printf("not found\n");
	}
}
void reverse(){
	struct node *ptr1=NULL,*ptr2 = NULL;
	temp = head;
	while(temp!= NULL){
		ptr1 = temp->next;
		temp->next = ptr2;
		ptr2 = temp;
		temp = ptr1;
	}
	head = ptr2;
}
void sorting(){
	struct node *i=NULL,*j=NULL;
	for(i = head; i!=  NULL;i = i->next){
		for(j = head;j!= NULL;j = j->next){
			if(i->data > j->data){
				int temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
		}
	}
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
	int data,choice;
	while(1){
		printf("1.Insert at first\n");
		printf("2.Insert at end\n");
		printf("3.Insert at pos\n");
		printf("4.Delete at first\n");
		printf("5.Delete at end\n");
		printf("6.Delete at pos\n");
		printf("7.Display\n");
		printf("8.Reverse linked List\n");
		printf("9.Search element\n");
		printf("10.Sorting linked list\n");
		printf("11.Exit\n");
		printf("enter your choice : ");
		scanf("%d",&choice); 
		int pos;
		switch(choice){
			case 1:
				printf("Enter data : ");
				scanf("%d",&data);
				insert_at_first(data);
				break;
			case 2:
				printf("enter data: ");
				scanf("%d",&data);
				insert_at_end(data);
				break;
			case 3:
				printf("enter the pos : ");
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
				printf("enter pos to delete : ");
				scanf("%d",&pos);
				delete_at_pos(pos);
				break;
			case 7:
				display();
				break;
			case 8:
				reverse();
				break;
			case 9:
				printf("enter the data to search : ");
				scanf("%d",&data);
				search(data);
				break;
			case 10:
				sorting();
				break;
			case 11:
				printf("Thankyou\n");
				return 0;
			default:
				printf("Invalid input\n");
		}
	}
	display();
	return 0;
}

