#include <stdio.h>

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//Orders from smallest to largest
void bubbleSort(int arr[], int n){
	int i, j;
	for(i = 0; i < n -1; i++){
		for(j = 0; j < n -i -1; j++){
			if(arr[j] > arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

int main(int argc, char* argv[]){
	int arr[] = {5, 10, 1, 16, 4, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
