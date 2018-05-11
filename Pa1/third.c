#include "third.h"

int main(int argc,char** argv){

	if(argc != 2){
		printf("error\n");
		return 0;
	}


	FILE* fd = fopen(argv[1],"r");
	char action;
	int number;


	if(fd==NULL){
		printf("error\n");
		return 0;
	}


	fseek(fd,0,SEEK_END);
	int size=ftell(fd);
	if(size==0){
		printf("\n");
		return 0;	
	}
	fseek(fd,0,SEEK_SET);


	while(!feof(fd)){

		fscanf(fd,"%c\t%d\n",&action,&number);
		printf("%c\t%d\n",action, number);
	
/*		if(!isdigit(number)){
		printf ("error digit not #\n");
		return 0;
}*/
	
		if(action == 'i'){

			insert(&head,number);

		}
		else if(action=='d')  {
		
			delete(&head,number);

		}

		else {
			printf("error\n");
			return 0;
		}
	}

	printList(&head);
	return 0;
}
