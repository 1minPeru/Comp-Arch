# ifndef third_h
#define third_h
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

 struct node{

	int data;
	struct node* next;

};

struct node* head;

int empty;

void insert(struct node** list, int num){

	struct node* input = malloc(sizeof(struct node));

	input->data = num;

	struct node*ptr = *list;

	if(ptr == NULL || num<ptr->data){

		if(ptr==NULL)
			empty =0;

		input->next = *list;
		*list = input;

		return;
	}

	while(ptr!=NULL){

		if(ptr->data == num)
			return;

		if(ptr->next==NULL){
			ptr->next = input;
			return;
		}

		if(num< ptr->next->data){

			input->next = ptr->next;
			ptr->next = input;	
			return;
		}
		ptr = ptr->next;

	}
}


void delete(struct node** list, int num){

	struct node* ptr = *list;
	struct node* prev = NULL;

	if(ptr == NULL)
		return ;

	if(ptr->data == num){

		*list = ptr->next;		

		if(ptr->next == NULL)
			empty =1;

		free(ptr);
		return;
	}

	while(ptr!=NULL){

		if(ptr->data == num){
			prev->next = ptr->next;
			free(ptr);
			return;
		}

		prev = ptr;
		ptr = ptr->next;
	}

	return;
}

void printList(struct  node** list){

	struct node* ptr = *list;

	if(empty ==1) printf("\n");		
	else{
		while(ptr!=NULL){
			printf("%d\t",ptr->data);
			ptr = ptr->next;

		}
		printf("\n");
	}


}

#endif /*third_h*/
