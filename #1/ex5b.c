#include <stdio.h>

int main() {
    for(int x = 1; x < 11; x++){
        for(int y = 1; y < 11; y++){
            printf("%3d ", x*y);
        }
        printf("\n");
    }
    return 0;
}