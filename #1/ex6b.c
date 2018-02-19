#include <stdio.h>

int main() {
    int max = 1;
    for(int y = 1; y <= 10; y++){
        for(int x = 1; x <= max; x++){
            if(x == max){
                printf("%3d\n", x*y);
            } else {
                printf("%3d ", x*y);   
            }
        }
        max++;
    }
    return 0;
}