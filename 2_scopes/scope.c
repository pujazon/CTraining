#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITER 28
const int nfinal = 317811;

int a,b,x,y;

int fibA(int x1, int y1);
int fibB(int* a, int* b);

int main(int argc, char *argv[]) {

	printf("Correct fibonacci with %d is %d\n", MAX_ITER, nfinal);

	x = 0;
	y = 1;

	printf("FibA 1st time %d\n",fibA(x,y));
	printf("FibA 2nd time %d\n",fibA(x,y));
	
	x = 0;
	y = 1;

	printf("FibB 1st time %d\n",fibB(&x,&y));
	printf("FibB 2nd time %d\n",fibB(&x,&y));
	
}

short fibA(int x1, int y1)
{ 
	int result = x;
	for (int i = 0; i < MAX_ITER; i++) {
		x = result;
		result = result + y;
		y = x;
	}

	return result;
}

int _fibB(int* a, int* b)
{ 

	int result = *a;
	for (int i = 0; i < MAX_ITER; i++) {
		*a = result;
		result = result + *b;
		*b = *a;
	}

	return result;
}
