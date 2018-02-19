#include <stdio.h>

void toHexa(int i){
    char letters[] = "ABCDEF";
    if(i < 0){
        printf("-");
        i = -i;
    }
    int hexa[32];
    int c = 0;
    while(i != 0){
        hexa[c] = i % 16;
        c++;
        i = i / 16;
    }
    c--;
    while(c >= 0){
        if(hexa[c] < 10)
            printf("%d", hexa[c]);
        else
            printf("%c", letters[hexa[c] - 10]);
        c--;
    }
}

int main(){
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);
    printf("%d in hexa = 0x", num);
    toHexa(num);
    printf("\n");
    return 0;
    return 0;
}
