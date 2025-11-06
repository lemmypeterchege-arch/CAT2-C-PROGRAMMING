//question 1

/*
an array is a data structure 
with a collection of values each identified by at least one array index
*/

// question 2

int scores[2][2]={
{65,92},
{84,72}
};

#include<stdio.h>

int main(){
	
	int i,j;
	
	int scores[2][4]={
	
	{65,92,35,70},
	{84,72,59,67}
	
	};
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("%d",scores[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}