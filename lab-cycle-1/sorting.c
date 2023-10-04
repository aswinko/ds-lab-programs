#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;	
}

void printArray(int *arr, int n){
	for (int i = 0; i<n; i++){
		printf("%d \n", arr[i]);
	}
}

void bubbleSort(int *arr, int n){
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
	
	printf("Sorted array is : ");
	printArray(arr, n);
}

void selectionSort(int *arr, int n){
	int small;
	for(int i = 0; i<n; i++){
		small = i;
		for(int j = i+1; j<n; j++){
			if(arr[j] < arr[small]){
				small = j;
			}
			swap(&arr[small], &arr[i]);
		}
	}
	
	printf("Sorted array is : ");
	printArray(arr, n);
}

void insertionSort(int *arr, int n){
	int i, j, temp;  
	for (i = 1; i < n; i++) {  
		temp = arr[i];  
		j = i - 1;  

		while(j>=0 && temp <= arr[j]){    
		    arr[j+1] = arr[j];     
		    j = j-1;    
		}    
		arr[j+1] = temp;    
	}  
    
	printf("Sorted array is : ");
	printArray(arr, n);
}

int main(){
	int choice=0, n;
	printf("Enter the array limit : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the array elements :");
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	while(choice != 4){
		printf("Enter the choice 1 - Bubble sort, 2 - Selection sort, 3 - Insertion sort 4 - Exit : \n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				bubbleSort(arr, n);
				break;
			case 2:
				selectionSort(arr, n);
				break;
			case 3:
				insertionSort(arr, n);
				break;
			case 4:
				printf("Exiting..");
				break;
			default:
				printf("Invalid entry");
		}
	}
}
