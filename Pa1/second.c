#include "second.h"

int main (int argc,char **argv){


	if(argc <2){
		printf("error\n");
		return 0;
	}

	int i = atoi(argv[1]);

	if(i == 1){
		printf("no\n");
		return 0;
	}

	int a;
	for (a=2;a<i;a++){

		if(i%a ==0){
			printf("no\n");
			return 0;
		}
	}

	printf("yes\n");
	return 0;

}
