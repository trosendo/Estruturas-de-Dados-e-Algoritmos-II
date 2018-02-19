#include <stdio.h>

int factorial(int i){
	long sum = 1;
	while(i > 1){
		sum = sum * i;
		i--;
	}
	return sum;
}

int main() {
	printf("10! = %d\n20! = %d\n21! = %d\n", factorial(10), factorial(20), factorial(21));
	return 0;
}