#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *head = NULL,*tail = NULL,*temp = NULL;
void insert_at_end(int data){
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = tail = temp;
		tail->next = head;
	}
	else{
		tail->next = temp;
		temp->next = head;
		tail = temp;
	}
}
void sorting(){
	struct node *i=NULL,*j = NULL;
	for(i = head;i->next!=tail->next;i = i->next){
		for(j = head;j->next!= tail->next;j=j->next){
			if(j->data > j->next->data){
				int temp = j->data;
				j->data = j->next->data;
				j->next->data = temp;
			}
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
		insert_at_end(n);
	}
	display();
	sorting();
	display();
	return 0;
}

