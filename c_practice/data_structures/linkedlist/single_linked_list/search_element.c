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
int search(struct node *head,int val){
	struct node *current = head;
	int found = 0;
	while(current != NULL){
		printf(" %d -> ",current->data);
		if(val == current->data){
			found = 1;
		}
		current = current->next;
	}
	printf("NULL\n");
	return found;
}

int main(){
	struct node *head = NULL;
	int n;
	printf("enter n value : ");
	scanf("%d",&n);
	int data = 0;
	printf("enter the values : ");
	for(int i=1;i<=n;i++){
		scanf("%d",&data);
		head = insert_at_first(head,data);
	}
	int val;
	printf("enter the value to search : ");
	scanf("%d",&val);
	if(search(head,val)){
		printf("%d is present in list \n",val);
	}
	else{
		printf("%d is not present in list \n",val);
	}
	return 0;
}



