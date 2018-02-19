#include <stdio.h>

int main() {
    int increment = 1;
    for(int i = 1; i <= 100; i += increment){
    	if(i == 100) {
    		printf("%3d\n", i);
    	}else if(i % (increment*10) == 0){
			printf("%3d\n", i);
			increment++;
			i = 0;
		} else {
			printf("%3d ", i);
		}
    }
    return 0;
}