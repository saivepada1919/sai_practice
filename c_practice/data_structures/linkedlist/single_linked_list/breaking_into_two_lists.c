#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *insert_at_first(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		return head;
	}
	else{
		temp->next = head;
		head = temp;
		return head;
	}
}
struct node *insert_at_end(struct node *head,int data){
	struct node *temp ,*current;
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		return head;
	}
	else{
		current = head;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = temp;
		return head;
	}
}
struct node *insert_at_pos(struct node *head,int pos,int data){
	struct node *temp1,*temp2,*new;
	new = malloc(sizeof(struct node));
	new->data = data;
	new->next = NULL;
	temp1=head;
	if(head ==  NULL){
		head = new;
		return head;
	}
	else if(pos == 1){
		return insert_at_first(head,data);
	}
	else{
		while(pos != 2){
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
			return head;
		}
	}
}
void *break_list_before_pos(struct node *before,int pos){
	struct node *current = before;
	while(pos != 0){
		printf("%d -> ",current->data);
		current = current->next;
		pos--;
	}
	printf("NULL\n");
}

struct node *break_list_after_pos(struct node *after,int pos){
	struct node *current = after;
	int i=1;
	while(pos != i){
		current = current->next;
		i++;
	}
	after = current->next;
	return after;
}
	
void print(struct  node *head){
	struct node *current = head;
	int count =0;
	while(current != NULL){
		printf("%d -> ",current->data);
		current =  current->next;
		count++;
	}
	printf("NULL\n");
	printf("count nodes : %d\n",count);
}
int main(){
	struct node *head = NULL;
	head = insert_at_first(head,40);
	head = insert_at_first(head,30);
	head = insert_at_first(head,20);
	head = insert_at_first(head,10);
	head = insert_at_end(head,50);
	head = insert_at_end(head,60);
	head = insert_at_end(head,70);
	head = insert_at_end(head,80);
	head = insert_at_pos(head,6,55);
	head = insert_at_pos(head,8,65);
	printf("before breaking into two nodes and count nodes :\n");
	print(head);
	struct node *before = head;
	printf("after entering postion before nodes:\n");
	before = break_list_before_pos(before,5);
	struct node *after = head;
	printf("after entering postion after nodes:\n");
	after = break_list_after_pos(after,5);
	print(after);

}
