#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h> 


void insert(int arr[],int visited[],int inp){

	int key =abs(inp%1000);

	if(visited[key]==0){
		arr[key]= inp;
		visited[key] = 1;	
		return;
	}

	int stor =0;	

	while(stor==0){
		if(visited[key]==1 && arr[key]==inp){
			printf("duplicate\n");

			return;
			break;
		}

		key = key+1;
		if(visited[key]==0){

			arr[key]=inp;
			visited[key]=1;
			printf("inserted\n"); 			
			stor=1;
			return;
		}
	}
	printf("error lel\n");
	return;
}


void scan(int arr[],int visited[], int inp){

	//int start = abs(inp%1000);
	//int index = start;

	int i;

	for(i =0;i<1000;i++){

		if((visited[i] == 0 ) &&( i!=1000))
			continue;

		else if(visited[i] == 1){

			if(arr[i]==inp)	{

				printf("present\n");
				return;
			}
			else{
				continue;

			}
		}

		if(i==1000){

			printf("absent\n");
			return;
		}
	}

	return;
}

