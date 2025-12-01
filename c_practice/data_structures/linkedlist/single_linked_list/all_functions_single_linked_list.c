#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *head=NULL,*tail = NULL,*temp = NULL;
void insert_first(int data){
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
void insert_end(int data){
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
void insert_pos(int pos,int data){
	struct node *ptr = NULL,*current = head;
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(pos==1){
		temp->next = head;
		head = temp;
	}
	else{
		while(pos!=2 && current != NULL){
			current = current->next;
			pos--;
		}
		if(current == tail || current == NULL){
			tail->next = temp;
			tail = temp;
		}
		else{
			ptr = current->next;
			current->next =temp;
			temp->next = ptr;
		}
	}
}
void delete_first(){
	if(head == NULL){
		printf("List is empty, nothing to delete\n");
		return;
	}
	struct node *current = NULL;
	current = head;
	head = head->next;
	current->next = NULL;
	free(current);
}
void delete_end(){
	if(head == NULL){
		printf("List is empty, nothing to delete\n");
		return;
	}
	if(head == tail){
		free(head);
		head = tail = NULL;
		return;
	}
	temp = head;
	while(temp->next != tail){
		temp = temp->next;
	} 
	free(tail);
	tail = temp;
	tail->next = NULL;
}
void delete_pos(int pos){
	struct node *current = head;
	if(pos == 1){
		temp = head;
		head = head->next;
		free(temp);
	}
	else{
		while(pos!=2 && current != NULL){
			current = current->next;
			pos--;
		}
		if(current == NULL|| current->next == NULL){
			temp = head;
			while(temp->next != tail){
				temp = temp->next;
			}
			free(tail);
			tail = temp;
			tail->next = NULL;
		}
		else{
			temp = current->next;
			current->next = temp->next;
			free(temp);
		}
	}
}
void sorting() {
    struct node *i, *j;
    int temp;

    for (i = head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}
void search(int data){
	temp = head;
	int found = 0;
	while(temp!= NULL){
		if(temp->data == data){
			found = 1;
		}
		temp = temp->next;
	}
	if(found){
		printf("Element found\n");
	}
	else{
		printf("Not found\n");
	}
}
void middle(){
	struct node *slow = head,*fast = head;
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	printf("middle element : %d\n",slow->data);
}
void reverse(){
	struct node *ptr1 = NULL,*ptr2 = NULL;
	temp = head;
	while(temp != NULL){
		ptr1 = temp->next;
		temp->next = ptr2;
		ptr2 = temp;
		temp = ptr1;
	}
	head = ptr2;
}

void display(){
	temp = head;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main(){
	int data,choice,pos;
	while(1){
		printf("1.insert at fisrt\n");
		printf("2.insert at end\n");
		printf("3.insert at pos\n");
		printf("4.delete at first\n");
		printf("5.delete at end\n");
		printf("6.delete at pos\n");
		printf("7.sorting\n");
		printf("8.middile\n");
		printf("9.search element\n");
		printf("10.Reverse\n");
		printf("11.display\n");
		printf("12.QUIT\n");
		printf("ENTER YOUR CHOICE\n");
		scanf("%d",&choice);
		switch(choice){

			case 1:
				printf("Enter data to insert at first: ");
				scanf("%d", &data);
				insert_first(data);
				break;

			case 2:
				printf("Enter data to insert at end: ");
				scanf("%d", &data);
				insert_end(data);
				break;

			case 3:
				printf("Enter data to insert: ");
				scanf("%d", &data);
				printf("Enter position: ");
				scanf("%d", &pos);
				insert_pos(pos, data);
				break;

			case 4:
				delete_first();
				break;

			case 5:
				delete_end();
				break;

			case 6:
				printf("Enter position to delete: ");
				scanf("%d", &pos);
				delete_pos(pos);
				break;

			case 7:
				sorting();
				break;

			case 8:
				middle();
				break;

			case 9:
				printf("Enter element to search: ");
				scanf("%d", &data);
				search(data);
				break;
			case 10:
				reverse();
				break;
			case 11:
				display();
				break;

			case 12:
				printf("THANK YOU\n");
				exit(0);

			default:
				printf("Invalid choice! Please enter 1–11.\n");
				break;
		}
	}
}
