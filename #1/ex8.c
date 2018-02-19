#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    for(int i = 555; i < 777; i++){
        bool isPrime = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            printf("%d\n", i);
    }
    return 0;
}
