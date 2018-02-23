#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"


// Criar um array de dimensão dinâmica
struct dynamicArray {
    int *array;
    char *arrayChar;
    int used;   // variáveis para saber o numero de
    int size;   // valores presentes e o tamanho total
};

void initArray(struct dynamicArray *a, int initSize) {
    a -> array = (int *) malloc(initSize * sizeof(int));  // alocar o espaço e apontá-lo para array
    a -> used = 0;
    a -> size = initSize;
}
void initArrayChar(struct dynamicArray *a, int initSize) {
    a -> arrayChar = (char *) malloc(initSize * sizeof(char));  // alocar o espaço e apontá-lo para array
    a -> used = 0;
    a -> size = initSize;
}

void insertArray(struct dynamicArray *a, int element) {
    int used = a -> used;
    int size = a -> size;
    if (used == size) { // caso o espaço alocado esteja completo aumenta-o para o dobro
        a -> size *= 2;
        a -> array = (int *) realloc(a -> array, a -> size * sizeof(int));
    }
    a -> array[used] = element; // adicionar o novo elemento ao fim do array
    a -> used++;
    printf(" + INSERTED %d\n", a -> array[used]);
}
void insertArrayChar(struct dynamicArray *a, char element) {
    int used = a -> used;
    int size = a -> size;
    if (used == size) { // caso o espaço alocado esteja completo aumenta-o para o dobro
        a -> size *= 2;
        a -> arrayChar = (char *) realloc(a -> array, a -> size * sizeof(char));
    }
    a -> arrayChar[used] = element; // adicionar o novo elemento ao fim do array
    a -> used++;
    printf(" + INSERTED %c\n", a -> arrayChar[used]);
}

void freeArray(struct dynamicArray *a) {   // liberta o espaço em memória reservado para o array
    free(a -> array);
    a -> array = NULL;
    a -> used = a -> size = 0;
}
void freeArrayChar(struct dynamicArray *a) {   // liberta o espaço em memória reservado para o array
    free(a -> arrayChar);
    a -> arrayChar = NULL;
    a -> used = a -> size = 0;
}
// FIM DA IMPLEMENTAÇÃO DO ARRAY DINAMICO


void myScan(int arr[], int n){
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int main(){
    unsigned int nElements;
    scanf("%d", &nElements);  // 1 <= N <= 100000
    int numbers[nElements];
    myScan(numbers, nElements);

    struct dynamicArray c;
    initArrayChar(&c, 50);
    struct dynamicArray n;
    initArray(&n, 50);
    int scanvalue;
    do{
        char c1;
        int n1;
        scanvalue = scanf(" %1c %d", &c1, &n1);
        insertArrayChar(&c, c1);
        insertArray(&n, n1);
    }while (scanvalue != EOF);

    for(int i = 0; i < c.used - 1; i++){
        printf(" + %c %d\n", c.arrayChar[i], n.array[i]);
    }
    //
    return 0;
}
