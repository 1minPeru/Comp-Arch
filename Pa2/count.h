#include<stdio.h>
#include<stdlib.h>

typedef struct node{ //struct of nodes for a linked list

	unsigned long int data; //node contains int
	struct node* next; //node contains address of next node
	int visited ;

} node;

//array of nodes
node array[1000];
long int counter =0;


void addNode(unsigned long int num, int index){

	if(array[index].visited == 0){

		array[index].data = num;
		array[index].visited = 1;
		counter++;	
		return;
	}

	if(array[index].data == num){

		return;

	} 
	node* ptr = &array[index];

	while(ptr->next!= NULL){

		if(ptr->data == num){

			return;
		}
		else{

			ptr = ptr->next;
		}
	}

	if(ptr->data == num){

return;
}

	node* input =(node*) malloc(sizeof(node));

	input->data = num;
	input ->visited = 1;
	ptr->next = input;
	counter++;

	return;
}
