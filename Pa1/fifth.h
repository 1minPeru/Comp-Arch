#ifndef fifth_h
#define fifth_h
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

// matrix is mxn but i and j are used for loops
int i,j,m,n;

void createMatrix(FILE *f,int matrix[m][n]){

	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			fscanf(f,"%d",&matrix[i][j]);


	return;
}

void addMatrices(int m1[m][n],int m2[m][n]){
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			m1[j][i] += m2[j][i];
return;
}

void printMatrix(int matrix[m][n]){

	for(i=0;i<m;i++){
		for(j=0;j<m;j++){

			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
return;
}

#endif
