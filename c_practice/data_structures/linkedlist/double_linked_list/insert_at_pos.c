#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
};

struct node *create_node(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	head = temp;
	return head;
}

struct node *insert_at_first(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		return create_node(head,data);
	}
	else{
		temp->next = head;
		head->prev = temp;
		head = temp;
		return head;
	}
}

struct node *insert_at_end(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
	struct node *ptr = NULL;
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	ptr = head;
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->prev = ptr;

	return head;
}

struct node *insert_at_position(struct node *head,int pos,int data){
        struct node *temp1=NULL,*new=NULL,*temp2=NULL;
        new = malloc(sizeof(struct node));
        new->data = data;
        new->prev = NULL;
        new->next = NULL;
        if(head == NULL){
                return create_node(head,data);
        }
        else if(pos == 1){
                return insert_at_first(head,data);
        }
        else{
                temp1= head;
                while(pos!=2){
                        temp1 = temp1->next;
                        pos--;
                }
                if(temp1->next == NULL){
                        return insert_at_end(head,data);
                }
                else{

                        temp2 = temp1->next;
                        temp1->next = new;
                        new->next = temp2;
                        new->prev = temp1;
			temp2->prev = new;
                        return head;
                }
        }
}



void print(struct node *head){
	struct node *ptr = head;
	while(ptr != NULL){
		printf(" %d -> ",ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}
int main(){
	struct node *head = NULL;

	head = insert_at_first(head,10);
	print(head);
	head = insert_at_first(head,5);
	print(head);
	head = insert_at_end(head,40);
	print(head);
	head = insert_at_position(head,2,30);
	print(head);
	head = insert_at_position(head,1,2);
	print(head);
	head = insert_at_position(head,6,99);
	print(head);
}


