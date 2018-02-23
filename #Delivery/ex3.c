#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"

void myScan(int arr[], int n){
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int main(){
    unsigned int nElements;
    scanf("%d", &nElements);  // 1 <= N <= 100000
    int numbers[nElements];
    myScan(numbers, nElements);

    int scanvalue;

    int size = 50;
    int used = 0;
    char *c = malloc(size * sizeof(char));
    int *n = malloc(size * sizeof(int));

    do{
        char c1;
        int n1;
        scanvalue = scanf(" %1c %d", &c1, &n1);
        if(used == size){
            size *= 2;
            c = realloc(&c, size * sizeof(char));
            n = realloc(&n, size * sizeof(int));
        }
        c[used] = c1;
        n[used] = n1;
        used++;
    }while (scanvalue != EOF);

    for(int i = 0; i < used - 1; i++){
        printf(" + %c %d\n", c[i], n[i]);
    }

    return 0;
}
