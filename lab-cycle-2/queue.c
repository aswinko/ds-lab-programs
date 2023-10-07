#include<stdio.h>
int queue[100], front = -1, rear = -1, n, choice = 0;

void enqueue(){
	if(rear == n-1){
		printf("Queue is Full!\n");
	}else{
	
		if(front == -1){
			front = 0;
		}
		printf("Enter the element : ");
		rear += 1;
		scanf("%d", &queue[rear]);
	}
}

void dequeue(){
	if(front < 0 || front > rear){
		printf("Queue is empty!\n");
		return;
	}else{
		front += 1;
	}
}

void display(){
	if(front == -1 || rear == -1){
		printf("Queue is empty!\n");
		return;
	}else{
		printf("Elements are : "); 
		for(int i = front; i <= rear; i++){
			printf("%d ", queue[i]);
		}
		printf("\n");
	}
}

int main(){
	printf("Enter the size of queue : ");
	scanf("%d", &n);
	 while(choice != 4){
	 	printf("Enter the choice 1 - Enqueue, 2 - Dequeue, 3 - Display, 4 - Exit : ");
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
	 			printf("Exiting..");
	 			break;
	 	}
	 }
}
