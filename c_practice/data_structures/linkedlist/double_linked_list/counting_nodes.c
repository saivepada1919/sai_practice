#include <stdio.h>
#include <stdlib.h>
struct node{
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
		head->prev = temp;
		temp->next = head;
		head = temp;
	        return head;
	}
}
struct node *insert_at_end(struct node *head,int data){
	struct node *temp,*current;
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		return create_node(head,data);
	}
	else{
		current = head;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = temp;
		temp->prev = current;
		return head;
	}
}
struct node *insert_at_pos(struct node *head,int pos,int data){
	struct node *new,*temp1,*temp2;
	new = malloc(sizeof(struct node));
	new->prev = NULL;
	new->data = data;
	new->next = NULL;
	if(head == NULL){
		return create_node(head,data);
	}
	else if(pos == 1){
                return insert_at_first(head,data);
        }
	else{
		temp1 = head;
		while(pos!=2){
			temp1 = temp1->next;
			pos--;
		}
		if(temp1->next == NULL){
			return insert_at_end(head,data);
		}
		temp2 = temp1->next;
		temp1->next = new;
		new->prev = temp1;
		new->next = temp2;
		return head;
	}
}			
void counting(struct node *head){
	struct node *current = head;
	int count = 0;
	while(current != NULL){
		printf(" %d -> ",current->data);
		current = current->next;
		count++;
	}
	printf("NULL\n");
	printf("count of nodes : %d\n",count);
}	
int main(){
	struct node *head = NULL;
	head = insert_at_first(head,10);
	head = insert_at_first(head,20);
	head = insert_at_first(head,30);
	head = insert_at_end(head,40);
	head = insert_at_end(head,50);
	head = insert_at_pos(head,3,70);
	counting(head);
	return 0;
}


