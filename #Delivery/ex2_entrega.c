#include <stdio.h>

int main(){

    unsigned int numberOfNumbers;
    scanf("%d", &numberOfNumbers);
    int numbers[numberOfNumbers];
    for(int i = 0; i < numberOfNumbers; i++){
        scanf("%d", &numbers[i]);
    }


    unsigned int numberOfIndex;
    scanf("%d", &numberOfIndex);
    int index[numberOfIndex];
    for(int c = 0; c < numberOfIndex; c++){
        scanf("%d", &index[c]);
    }


    for(int c = 0; c < numberOfIndex; c++){
        if(index[c] > numberOfNumbers || index[c] == 0)
            printf("valor @ %d = -\n", index[c]);
        else
            printf("valor @ %d = %d\n", index[c], numbers[index[c] - 1]);
    }

    return 0;
}
