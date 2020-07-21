#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int x,y;
	int *x1,*x2;
	
	x = 0;
	y = 1;

	printf("MAX_ITER is %d\n", MAX_ITER);
	
	printf("Fib %d\n",fibPointer(&x,&y));

	printf("Fib 2 %d\n",fibPointer2(x1,x2));
	
}


int fibPointer(int* a, int* b)
{ 
	printf("&a : %d\n a : %d,\na* : %d\n",&a, a,*a);
	printf("a pointer is allocated on: @ %d\na pointer points to : @%d\nvalue where a points is %d\n",&a,a,*a);
	
	int result = *a;
	for (int i = 0; i < MAX_ITER; i++) {
		*a = result;
		result = result + *b;
		*b = *a;
	}

	return result;
}


int fibPointer2(int* a, int* b)
{
 	printf("a %d\n",a);

	int result = *a;
	for (int i = 0; i < MAX_ITER; i++) {
		printf(".");
		*a = result;
		result = result + *b;
		*b = *a;
	}

	return result;
}