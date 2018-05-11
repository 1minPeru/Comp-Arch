#include"first.h"

int main (int argc, char **argv){

	int i;

	if(argc <=1){
		printf("error\n");
		return 0;
	}

	i = atoi(argv[1]);

	if(i%2 == 0)
		printf("even\n");

	else{

		if(i%2 ==1)
			printf("odd\n");
	}



	return 0;
}
