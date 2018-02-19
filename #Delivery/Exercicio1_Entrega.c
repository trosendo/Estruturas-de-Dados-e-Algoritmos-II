#include <stdio.h>

int main()
{
	int div = 0;
	int num = 15180;
	for(int i = 2; i < num; i++){
		if(num % i == 0){
			printf("%d\n", i);
			div++;
		}
	}
	printf("+ %d tem %d divisores\n", num, div);
	return 0;
}