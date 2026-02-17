#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};
struct node *head=NULL,*tail = NULL,*temp=NULL;

void insert_at_first(int data){
	temp = malloc(sizeof(struct node));
	if(temp == NULL){
		printf("allocatiom failed\n");
		return ;
	}
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
		return;
	}
	else{
		temp->next = head;
		head = temp;
	}
}

void insert_at_end(int data){
	temp = malloc(sizeof(struct node));
        if(temp == NULL){
                printf("allocatiom failed\n");
                return ;
        }
        temp->data = data;
        temp->next = NULL;
        if(head == NULL){
                head = tail = temp;
                return;
        }
	else{
		tail->next = temp;
		tail =temp;
	}
}

void insert_at_pos(int pos,int data){
	temp = malloc(sizeof(struct node));
        if(temp == NULL){
                printf("allocatiom failed\n");
                return ;
        }
        temp->data = data;
        temp->next = NULL;
	if(pos == 1){
		temp->next = head;
		head = temp;
	}
	else{
		struct node *current = head;
		while(pos !=2){
			current = current->next;
			pos--;
		}
		if(current->next == NULL){
			tail->next = temp;
			tail = temp;
		}
		else{
		temp->next = current->next;
		current->next = temp;
		}
	}
}



	

