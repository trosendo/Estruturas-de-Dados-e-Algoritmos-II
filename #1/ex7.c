#include <stdio.h>

#define DIM 45

int fibonacci(int i){
	if(i < 2){
		return i;
	} else {
		return fibonacci(i - 1) + fibonacci(i - 2);
	}
}

int main() {
	for(int i = 0; i < DIM - 1; i++)
		printf("%d ", fibonacci(i));
	printf("%d\n", fibonacci(DIM - 1));
	return 0;
}
