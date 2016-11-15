#include <stdio.h>
#include <stdlib.h> //for srand
#include <time.h>	//for time(NULL)

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArr(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}

void shuffle(int arr[], int n){
	srand(time(NULL));

	for(int i = n-1; i > 0; i--){
		int j = rand() % (i + 1);
		swap(&arr[i], &arr[j]);
	}
}

int main(int argc, char* argv[]){
	int arr[] = {1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);

	printArr(arr,n);
	shuffle(arr,n);
	printArr(arr,n);

	return 0;
}
