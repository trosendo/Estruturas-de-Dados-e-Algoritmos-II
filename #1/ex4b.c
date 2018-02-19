#include <stdio.h>

int factorial(int i){
	if(i == 0){
		return 1;
	}else{
		return factorial(i - 1) * i;
	}
}

int main() {
	printf("10! = %d\n20! = %d\n21! = %d\n", factorial(10), factorial(20), factorial(21));
	return 0;
}