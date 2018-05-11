#include "count.h"

int main (int argc, char** argv){

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
		printf("0\n");
		return 0;	
	}
	fseek(fd,0,SEEK_SET);

	unsigned long int num;
	int index = 0;
//set all visited values to 0 by default for every node in array

int c;
for(c=0;c<1000;c++){
array[c].visited = 0;
}
	while(!feof(fd)){
		
		fscanf(fd,"%lx\n",&num);
	
		index = num%1000;
		
	addNode(num,index);

}

printf("%lu\n",counter);
	return 0;
}
