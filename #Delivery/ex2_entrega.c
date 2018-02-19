#include <stdio.h>

void myScan(int arr[], int n){
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int main(){
    unsigned int numberOfNumbers;
    scanf("%d", &numberOfNumbers);  // 0 <= N <= 100000
    int numbers[numberOfNumbers];
    myScan(numbers, numberOfNumbers);

    unsigned int numberOfIndex;
    scanf("%d", &numberOfIndex);    // 0 <= N <= 100000
    int index[numberOfIndex];
    myScan(index, numberOfIndex);

    for(int c = 0; c < numberOfIndex; c++){
        if(index[c] > numberOfNumbers || index[c] == 0)
            printf("valor @ %d = -\n", index[c]);
        else
            printf("valor @ %d = %d\n", index[c], numbers[index[c] - 1]);
    }

    return 0;
}
