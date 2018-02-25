#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#include "string.h"
#include "limits.h"

long long int myScan(long long int arr[], int n){
    long long int sumAll = 0;
    for(int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
        sumAll += arr[i];
    }
    return sumAll;
}

long long int findMin(long long int *arr, int size){
    long long int min = arr[0];
    for (int i = 1; i < size; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

long long int findMax(long long int *arr, int size){
    long long int max = arr[0];
    for (int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

long long int getMaxOrMin(long long int numbers[], int size, int subSize, bool isMax){
    long long int maxSum = 0;
    long long int minSum = 0;
    for (int i = 0; i < size; i += subSize) {
        if(isMax){
            maxSum += (i + subSize <= size) ? findMax(&numbers[i], subSize) : findMax(&numbers[i], size - i);
        } else {
            minSum += (i + subSize <= size) ? findMin(&numbers[i], subSize) : findMin(&numbers[i], size - i);
        }
    }
    return (isMax) ? maxSum : minSum;
}

int main(){
    int nElements;
    scanf("%d", &nElements);  // 1 <= N <= 100000
    long long int numbers[nElements];
    long long int sumAll = myScan(numbers, nElements);
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
    long long int numToPrint;
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
        printf("+ %s %lld\n", (strcmp(&maxMin, "M") == 0) ? "max" : "min", numToPrint);
    }

    free(c);
    c = NULL;
    free(n);
    n = NULL;

    return 0;
}
