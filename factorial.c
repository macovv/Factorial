/*
 ============================================================================
 Name        : factorial.c
 Author      : szymon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int num){
	int fac;
	if(num<0)
		perror("Incorrect num\n");
	else if(num==0 || num==1)
		return 1;
	else
		fac = num * factorial(num-1);
	return fac;

}

int main() {
	int fac = factorial(5);
	printf("%d ", fac);
	return 0;
}
