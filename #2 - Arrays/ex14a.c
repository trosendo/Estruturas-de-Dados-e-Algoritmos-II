#include <stdio.h>

#define DIM 50000

int procura(int n, int s, int v[]){
    for(int i = 0; i < DIM; i++){
        if(v[i] == n)
            return i;
    }

    return -1;
}




int main(){
    printf("%d ELEMENTS\n", DIM);
    
    int array[DIM];

    for(int i = 1; i <= DIM; i++)
        array[i - 1] = i * 2;

    for (int i = 1; i <= DIM + 1; ++i){
        int p = procura(2 * i, DIM, array);

        if (p == -1)
            printf("Não encontrou %d\n", i);
        else if(array[p] != 2 * i)
            printf("Encontrou %d na posição errada: %d\n", i, p);
    }

    return 0;
}
