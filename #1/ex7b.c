#include <stdio.h>

int fibonacci(int i){
	int x = 1;
	int y = 0;
	int t;
	for(int c = 0; c < i; c++){
		t = x + y;
		x = y;
		y = t;
	}
	return t;
}

int main() {
	int max = 20;
	for(int i = 0; i < max; i++){
		if(i == max - 1)
			printf("%d\n", fibonacci(i));
		else
			printf("%d ", fibonacci(i));
	}
	return 0;
}
