#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
	int id;
	char name[50];
	int marks;
	struct node *next;
};
struct node *insert_at_end(struct node *head,int id,char name[50],int marks){
	struct node *temp = malloc(sizeof(struct node));
	struct node *current = NULL;
	temp->id = id;
	strcpy(temp->name,name);
	temp->marks = marks;
	temp->next = NULL;
	if(head== NULL){
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
void print(struct node *head){
	struct node *current = head;
	while(current != NULL){
		printf("%d\t%s\t%d\t\n",current->id,current->name,current->marks);
		current = current->next;
	}
}

int main(){
	struct node *head = NULL;
	int n;
	printf("enter the no of students : ");
	scanf("%d",&n);
	int id;
	char name[50];
	int marks;
	for(int i=1;i<=n;i++){
		printf("enter the sudent[%d] details : ",i); 
		scanf("%d%s%d",&id,name,&marks);
		head = insert_at_end(head,id,name,marks);
	}
	print(head);
	return 0;
}


