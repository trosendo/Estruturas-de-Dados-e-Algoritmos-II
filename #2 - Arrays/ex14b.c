#include <stdio.h>

#define DIM 500000

int binarySearch(int n, int i, int j, int v[]);

int procura(int n, int s, int v[]){
    return binarySearch(n, 0, DIM, v);
}


int binarySearch(int n, int i, int j, int v[]){
    int middle = (i + j) / 2;

    if(v[middle] == n)
        return middle;
    if(i >= j)
        return -1;
    else {
        if(v[middle] < n)
            return binarySearch(n, middle + 1, j, v);
        else
            return binarySearch(n, i, middle - 1, v);
    }
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
