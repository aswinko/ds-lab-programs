#include<stdio.h>
int que[10], MAX_SIZE, front=-1, rear=-1;

	void enqueue(){
		if((rear == MAX_SIZE-1 && front == 0) || front == rear + 1){
		printf("Queue is full!\n");
	}else{
		int data;
		printf("Enter the data : ");
		scanf("%d", &data);
		if(front==-1){
			front=0;
		}
		rear = (rear+1) % MAX_SIZE;
		que[rear] = data;
	}
}

void dequeue(){
	if(front == -1 || rear == -1){
		printf("Queue is empty!\n");	
	}else{
		front = (front+1) % MAX_SIZE;
	}
}

void display(){
	int i;
	if(front == -1 || rear == -1){
		printf("Queue is empty!\n");
	}else {
		for(i = front; i != rear; i = (i+1) % MAX_SIZE){
			printf("%d ", que[i]);
		}
		
		printf("%d ", que[i]);
		// printf("\n Rear -> %d \n", rear);

	}
}

int main(){
	int choice=0;
	printf("Enter the size of queue : ");
	scanf("%d", &MAX_SIZE);
	
	while(choice != 4){
		printf("Enter the choice 1 - enqueue, 2 - dequeue, 3 - display, 4 - exit : ");
		scanf("%d", &choice);
		switch(choice){
			case 1: 
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exiting...");
				break;
		}
	}
}
