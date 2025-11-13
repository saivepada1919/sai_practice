#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void print(struct node *head){
	struct node *temp = head;
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

//creating a node
struct node *create_node(struct node *head,int data){
	head=malloc(sizeof(struct node));
	head->data = data;
	head->next = NULL;
	return head;
}

//insert at begining
struct node *insert_at_first(struct node *head,int data){

	struct node *temp = malloc(sizeof(struct node));
	if (head == NULL){
		return create_node(head,data);
	}
	else{
		temp->data = data;
		temp->next = head;
		head = temp;      
	}
	return head;
}

//insert at particular position
struct node *insert_at_pos(struct node *head, int pos, int data) {
    struct node *temp = malloc(sizeof(struct node));
    struct node *current = head;
    int count = 1;

    temp->data = data;
    temp->next = NULL;
    if (pos == 1){
	    return insert_at_first(head,data);
    }

    while (current != NULL) {
        if (count == pos - 1) {
            temp->next = current->next;
            current->next = temp;
            break;
        }
        current = current->next;
        count++;
    }
    return head;
}

//insert at ending
struct node *insert_at_last(struct node *head,int data){
	struct node *current =NULL;
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		return create_node(head,data);
	}
	else{
		current = head;
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=temp;
		return head;
	}
}
//delete at first
struct node *delete_at_first(struct node *head){
	struct node *temp=NULL;
	if(head == NULL){
		printf("Linked list is empty");
		return head;
	}
	temp=head;
	head=head->next;
	free(temp);
	return head;
}

//delete at last
struct node *delete_at_last(struct node *head){
	struct node *temp=head,*current=NULL;
	current = head;
	if(head == NULL){
		printf("Linked list is empty");
		return head;
	}
	while(current->next!=NULL){
		temp = current;
		current = current->next;
	}
	temp->next=NULL;
	free(current);
	current=NULL;
		return head;
}

//delete at particular position
struct node *delete_at_pos(struct node *head,int pos){
	struct node *temp=NULL,*current=NULL;
	current = head;
/*	int count=1;
	while(current !=NULL){
		count++;
		if(count == pos){
			temp = current->next;
			current->next = temp->next;
			free(temp);
			break;
		}
		current = current->next;
	}
	*/
	if(head == NULL){
		printf("list is empty \n");
	}
	else if(pos==1){
		return delete_at_first(head);
	}
	else{
		while(pos !=1){
			temp=current;
			current=current->next;
			pos--;
		}
		temp->next=current->next;
		free(current);
	}

			

	return head;
}

//delete entire single linked list
struct node *delete_all_nodes(struct node *head){
	struct node *temp=NULL,*current = NULL;
	if(head == NULL){
		printf("Linked list is empty");
		return head;
	}
	current = head;
	while(current!=NULL){
		temp=current;
		current=current->next;
		free(temp);
	}
	return NULL;
}


int main(){
	struct node *head =NULL,*current=NULL,*temp=NULL;
	head = insert_at_first(head,10);
	printf("node insert from begining linked list:\n");
	print(head);

	printf("node insert from begining in linked list:\n");
	head = insert_at_first(head,20);
	print(head);

	printf("node insert from begining in linked list:\n");
	head = insert_at_first(head,30);
	print(head);

	printf("node insert from begining in linked list:\n");
	head = insert_at_first(head,40);
	print(head);

	printf("node insert at ending in linked list:\n");
	head = insert_at_last(head,50);
	print(head);

	printf("node insert at ending in linked list:\n");
	head = insert_at_last(head,60);
	print(head);

	printf("node insert at particular position in linked list:\n");
	head = insert_at_pos(head,3,100);
	print(head);

	printf("delete node at first:\n");
	head = delete_at_first(head);
	print(head);

	printf("delete node at last:\n");
	head = delete_at_last(head);
	print(head);

	printf("node delete at particular position in linked list:\n");
	head = delete_at_pos(head,3);
	print(head);

	printf("delete all nodes linked list:\n");
        head = delete_all_nodes(head);
        print(head);

	return 0;
}
