#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#include "string.h"

long int myScan(long int arr[], int n){
    long int sumAll = 0;
    for(int i = 0; i < n; i++){
        scanf("%ld", &arr[i]);
        sumAll += arr[i];
    }
    return sumAll;
}

int findMin(long int *arr, int size){
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int findMax(long int *arr, int size){
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

long int getMaxOrMin(long int numbers[], int size, int subSize, bool isMax){
    long int maxSum = 0;
    long int minSum = 0;
    for (int i = 0; i < size; i += subSize) {
        if(i + subSize <= size){
            if(isMax){
                maxSum += findMax(&numbers[i], subSize);
            }
            else{
                minSum += findMin(&numbers[i], subSize);
            }
        }else{
            if(isMax){
                maxSum += findMax(&numbers[i], size - i);
            } else {
                minSum += findMin(&numbers[i], size - i);
            }
        }
    }
    return (isMax) ? maxSum : minSum;
}

int main(){
    unsigned int nElements;
    scanf("%d", &nElements);  // 1 <= N <= 100000
    long int numbers[nElements];
    long int sumAll = myScan(numbers, nElements);
    int scanvalue;

    int size = 15;
    int used = 0;
    char *c = malloc(size * sizeof(char));
    int *n = malloc(size * sizeof(int));

    do{
        char c1;
        int n1;
        scanvalue = scanf(" %1c %d", &c1, &n1);
        if(scanvalue == EOF)
            break;
        if(used == size){
            size *= 2;
            c = realloc(c, size * sizeof(char));
            n = realloc(n, size * sizeof(int));
        }
        c[used] = c1;
        n[used] = n1;
        used++;
    }while (scanvalue != EOF);

    int subSize;
    char maxMin;
    long int numToPrint;
    bool isMax;
    for(int i = 0; i < used; i++){
        subSize = n[i]; // size of subsequences
        maxMin = c[i];  // char m or M
        isMax = strcmp(&maxMin, "M") == 0;
        if(subSize == 1) {
            numToPrint = sumAll;
        } else {
            numToPrint = getMaxOrMin(numbers, nElements, subSize, isMax);
        }
        printf(" + %s %ld\n", (strcmp(&maxMin, "M") == 0) ? "max" : "min", numToPrint);
    }

    return 0;
}
