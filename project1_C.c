#include "stdio.h"
void main(){

	printf("Hello World!! \n");

	int a[] = {1,23,3,1,3,1,2,1,1,33,1,1,4,1,34,1,1,4,1,5,1,1,5,1,5,1,6,1,1};
	printf("Array is given as \n {");
	int size = sizeof a/sizeof (int);
	int i = 0;
	for(i=0;i < size;i++){

		printf("%d  ",a[i]);

	}
	printf("} \n");

	int g = a[0];
	int temp = 0;
	int count = 0;
	for(i=0;i< size;i++){

		temp = a[i];
		if(g==temp){
			count++;
		}
		else{
			if(count == 0){
				g = temp;
				count = 0;
			}
			else{
				count--;
			}
		}
	}

	printf("\n The number with max occurance = %d", g);


}
