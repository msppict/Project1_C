#include "stdio.h"
void main(){

	printf("Hello World!! \n");

	int a[] = {1,23,3,1,3,1,2,1,1,33,1,1,4,1,34,1,1,4,1,5,1,1,5,1,5,1,6,1,1};
	int size = sizeof a[];
	printf("Sizes of a = %d",&size);
	printf("Array is given as \n");
	int i = 0;
	for(i=0;i<size;i++){

		printf("%d",a[i]);

	}


}
