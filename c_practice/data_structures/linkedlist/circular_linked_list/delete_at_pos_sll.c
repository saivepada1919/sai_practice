#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *head = NULL,*tail = NULL,*temp = NULL;
void insert_at_first(int data){
	temp = malloc(sizeof(struct node));
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
void delete_at_pos(int pos){
	struct node *temp2 = NULL;
	if(pos == 1){
		temp = head;
		head = head->next;
		tail->next = head;
		free(temp);
	}
	else{
		temp = head;
		while(pos!=1){
			temp2 = temp;
			temp = temp->next;
			if(temp == head){
				return ;
			}
			pos--;
		}
		if(temp == tail){
			tail = temp2;
			tail->next = head;
			free(temp);
		}else{
			temp2->next = temp->next;
			free(temp);
		}
	}	
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
		insert_at_first(n);
	}
	display();
	delete_at_pos(1);
	display();
	delete_at_pos(6);
	display();
	delete_at_pos(3);
	display();
	delete_at_pos(2);
	display();

	return 0;
}
