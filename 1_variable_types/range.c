#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITER 28
const int nfinal = 317811;

int main(int argc, char *argv[]) {

	int a = 0;
	int b = 1;	
	int nfinal = 317811;

	printf("With %d iter\n Theory: %d, Calculated %d",
		MAX_ITER,nfinal,fibonacci(a,b));
}

short fibonacci(int x1, int x2)
{ 
	short result = x1;
	for (int i = 0; i < MAX_ITER; i++) {
		x1 = result;
		result = result + x2;
		x2 = x1;
	}

	return result;
}
