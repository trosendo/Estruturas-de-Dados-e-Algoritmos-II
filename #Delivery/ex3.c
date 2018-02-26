#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#include "string.h"
#include "limits.h"

void myScan(int arr[], int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}

long long int findMin(int *arr, int size){
    long long int min = arr[0];
    for (int i = 1; i < size; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

long long int findMax(int *arr, int size){
    long long int max = arr[0];
    for (int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

long long int getMaxOrMin(int numbers[], int size, int subSize, bool isMax){
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
    int numbers[nElements];
    myScan(numbers, nElements);
    int scanvalue;

    do{
        char c1;
        int n1;
        scanvalue = scanf(" %c %d", &c1, &n1);
        if(scanvalue == EOF)
            break;
        if(c1 == 'M')
            printf("+ %s %lld\n", "max", getMaxOrMin(numbers, nElements, n1, true));
        else
            printf("+ %s %lld\n", "min", getMaxOrMin(numbers, nElements, n1, false));
    }while (scanvalue != EOF);

    return 0;
}
