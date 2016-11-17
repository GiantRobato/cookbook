#include <stdio.h>
#include <stdlib.h> //for malloc

struct Node{
	int d;
	struct Node * next;
};

typedef struct Node node;

void printLL(node* head){
	while(1){
		if(head==NULL) return;
		printf("%d\n",head->d);
		head = head->next;
	}
}

int main(int argc, char* argv[]){
	node *head, *tmp, *prev;

	//create first node
	tmp = (node *) malloc(sizeof(node));
	tmp->d = 0;
	tmp->next = NULL;

	head = tmp;

	int i;
	for(i = 0; i < 10; i++){
		prev = tmp;

		tmp = (node *) malloc(sizeof(node));
		tmp->d = i;
		tmp->next = NULL;

		prev->next = tmp;
	}

	printLL(head);

	return 0;
}
