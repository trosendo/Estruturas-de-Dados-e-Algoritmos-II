#include <stdio.h>

void intToBinary(int i) {
    if(i < 0){
        printf("-");
        i = -i;
    }
    int binary[32];
    int c = 0;
    while(i != 0){
        binary[c] = i % 2;
        c++;
        i = i / 2;
    }
    c--;
    while(c >= 0){
        printf("%d", binary[c]);
        c--;
    }
}

int main() {
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);
    printf("%d in binary = ", num);
    intToBinary(num);
    printf("\n");
    return 0;
}
