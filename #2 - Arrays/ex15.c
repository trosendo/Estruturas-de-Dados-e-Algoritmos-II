#include <stdio.h>

#define DIM 45

int fibonacci(int n){
    static int v[DIM];
    static int i;
    if(n < i)
        return v[n];
    if(n < 2) {
        v[n] = n;
        i++;
        return n;
    }
    i++;
    v[i - 1] = fibonacci(n - 1) + fibonacci(n - 2);
    return v[i - 1];
}

int main() {

	for(int i = 0; i < DIM; i++){
		if(i == DIM)
			printf("%d\n", fibonacci(i));
		else
			printf("%d ", fibonacci(i));
	}
    printf("\n");
	return 0;
}
