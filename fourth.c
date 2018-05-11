#include "fourth.h"




int main(int argc,char** argv){


	if(argc != 2){

		printf("error\n");
			return 0;
	}


	FILE* fd = fopen(argv[1],"r");

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


	int  map[1000];
	int visited[1000];
	char action;
	int num;
	while(!feof(fd)){
	
		fscanf(fd,"%c\t%d\n",&action,&num);

	if(action =='i'){
	insert(map,visited,num);
}
	else if(action =='s'){
	scan(map,visited,num);
}

	else{

	printf("error\n");
}
}

return 0;
}
