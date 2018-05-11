#include "fifth.h"

int main(int argc,char*argv[]){

	if(argc<2){
		printf("error\n");
		return 0;

	}

	FILE *fd = fopen(argv[1],"r");
	if(fd==NULL){
		printf("error\n");
		return 0;
	}

	char line[20];


	fscanf(fd,"%d\t%d\n",&m,&n);

	int matrix1[m][n];
	int matrix2[m][n];

	createMatrix(fd,matrix1);
	fgets(line,sizeof(line),fd);
	createMatrix(fd,matrix2);
	addMatrices(matrix1,matrix2);
	printMatrix(matrix1);

return 0;

}
