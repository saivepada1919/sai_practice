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
void selection_sorting(){
	struct node *i=NULL,*j=NULL,*min = NULL;
	for(i = head;i->next != head;i = i->next){
		min = i;
		for(j=i->next;j != head;j = j->next){
			if(min->data > j->data)
				min = j;
		}
		if(min !=j){
			int temp = i->data;
			i->data = min->data;
			min->data = temp;
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
	selection_sorting();
	display();
}
