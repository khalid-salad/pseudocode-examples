#include <stdio.h>
#include <stdlib.h>

void fib(unsigned int[], unsigned int);

int main(int argc, char* argv[])
{
	if (argc == 1) {
		printf("Need an integer argument\n");
		return EXIT_FAILURE;
	}
	unsigned int n = atoi(argv[1]);
	unsigned int* fib_arr = malloc(n * sizeof(*fib_arr));
	fib(fib_arr, n);
	for (unsigned int i = 0; i < n; i++) {
		printf("The %d-th Fibonacci Number is %d\n", i, fib_arr[i]);
	}
	return EXIT_SUCCESS;
}

void fib(unsigned int fib_arr[], unsigned int n)
// Assume array fib_arr is already allocated on the heap
{
	fib_arr[0] = 0;
	if (n > 0) {
		fib_arr[1] = 1;
	}
	for (unsigned int i = 2; i < n; i++) {
		fib_arr[i] = fib_arr[i - 1] + fib_arr[i - 2];
	}
}