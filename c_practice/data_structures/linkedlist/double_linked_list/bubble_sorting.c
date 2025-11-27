#include <stdio.h>
#include <stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *insert_at_first(struct node *head,int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		return head;
	}
	else{
		temp->next = head;
		head->prev = temp;
		head = temp;
		return head;
	}
}
struct node *insertion_sort(struct node *head){
	struct node *i,*j;
	i = head;
	for(i = head;i->next !=NULL;i = i->next){
		for(j = head;j->next != NULL;j = j->next){
			if(j->data > j->next->data){
				int temp = j->data;
				j->data = j->next->data;
				j->next->data = temp;
			}
		}
	}
	return head;
}
void print(struct node *head){
	struct node *current = head;
	while(current != NULL){
		printf("%d -> ",current->data);
		current = current->next;
	}
	printf("NULL\n");
}
int main(){
	struct node *head = NULL;
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int data;
	printf("enter the elemnts data : ");
	for(int i=1;i<=n;i++){
		scanf("%d",&data);
		head = insert_at_first(head,data);
	}
	printf("bofore sorting double linked list : \n");
	print(head);
	head = insertion_sort(head);
	printf("after sorting double linked list : \n");
	print(head);
	return 0;
}


