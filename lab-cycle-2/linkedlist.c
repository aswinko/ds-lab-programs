#include<stdio.h>
#include<stdlib.h>

struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  

void insert_at_begining(){
	struct node *ptr;
	int item;
	ptr = (struct  node*)malloc(sizeof(struct node*));
	if(ptr == NULL){  
		printf("\nOVERFLOW");  
	} else {  
		printf("\nEnter value\n");    
		scanf("%d",&item);    
		ptr-> data = item;  
		ptr-> next = head;  
		head = ptr;  
		printf("\nNode inserted");  
    	}  
}

void insert_at_end(){
	struct node *ptr, *temp;
	int item;
	ptr = (struct node*)malloc(sizeof(struct node*));
	if(ptr == NULL){
		printf("\nOVERFLOW");
	} else {
		printf("Enter value : \n");
		scanf("%d", &item);
		ptr-> data = item;
		if(head == NULL){
			ptr->next = NULL;
			head = ptr;
			printf("\nNode inserted.");
		} else {
			temp = head;
			while(temp -> next != NULL){
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->next = NULL;
			printf("Node inserted.");
		}
		
	}
}

void insert_at_random(){
	int item, loc;
	struct node *ptr, *temp;
	ptr = (struct node *) malloc(sizeof(struct node*));
	if(ptr == NULL){
		printf("\nOVERFLOW");
	} else {
		printf("Enter the value : ");
		scanf("%d", &item);
		ptr->data = item;
		printf("Enter the location which you want to insert  : ");
		scanf("%d", &loc);
		temp = head;
		for(int i = 0; i < loc; i++){
			temp = temp->next;
			if(temp == NULL){
				printf("\nCant insert\n");
				return;
			}
		}
		ptr->next = temp->next;
		temp->next = ptr;
		printf("Node inserted.");
	}
}

void display(){
	struct node *ptr;
	ptr = head;
	if(ptr == NULL){
		printf("Nothing to print!");
	}else {
		printf("Values are : ");
		while(ptr != NULL){
			printf("%d ", ptr->data);
			ptr = ptr -> next;
		}
	}
}

int main(){
	int choice=0;
	while(choice != 6){
		printf("Enter the choice 1 - insert at begining, 2 - insert at end, 3 - insert at random, 4 - display : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				insert_at_begining();
				break;
			case 2:
				insert_at_end();
				break;
			case 3:
				insert_at_random();
				break;
			case 4:
				display();
				break;
		}
	}
}
