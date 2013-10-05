/*
 ============================================================================
 Name        : SelectionSort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100], i;
	void SelectionSort(int *arr, int n);
	int n;

	setbuf(stdout, NULL);

	printf("Enter number of elements : \n");
	scanf("%d",&n);

	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}

	SelectionSort(&a, n);

	for(i = 0; i < n; i ++){
		printf("%d\t",a[i]);
	}


	return EXIT_SUCCESS;
}

void SelectionSort(int *a, int n){

	int i,j;
	int walker,current = 0 ,smallest,temp;

	for(i = 0; i < n; i++){

		smallest = current;
		walker = current + 1;

		for(j = walker; j <= n; j++){

			if(a[walker] < a[smallest]){

				smallest = walker;

			}

		}

		temp = a[current];
		a[current] = a[smallest];
		a[smallest] = temp;

		current++;
	}

}
