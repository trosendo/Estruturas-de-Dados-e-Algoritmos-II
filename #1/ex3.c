#include <stdio.h>

int main(void) {
	for(int i = 1; i <= 20; i++){
		if(i == 20){
			printf("%d\n", i);
		}else{
			printf("%d ", i);
		}
	}
	return 0;
}