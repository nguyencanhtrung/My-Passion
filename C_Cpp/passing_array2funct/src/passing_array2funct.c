/*
 ============================================================================
 Name        : passing_array2funct.c
 Author      : Trung C. Nguyen
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void initArray(int array[5]){
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
}

void swapElement(int *x, int *y){
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

//void swapElement(int x, int y){
//	x = x + y;
//	y = x - y;
//	x = x - y;
//}

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	int a[5];
	initArray(a);
	printf("array: %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);

	int x = 2;
	int y = 3;
	swapElement(&x, &y);
	//swapElement(x,y);


	printf("\nx = %d; y = %d", x,y);
	return EXIT_SUCCESS;
}
