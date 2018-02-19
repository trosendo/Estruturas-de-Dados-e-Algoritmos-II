//  Compile o programa seguinte (sem e com -Wall)
//  e relacione as mensagens do compilador com o que aparece (ou falta) no programa.

//  (A opção -Wall indica ao compilador que deve assinalar todas as ocorrências, no código,
//  de coisas que não constituem erros mas que podem não estar correctas.)

#include <stdio.h>

int baz(int n) {
    int f, g;
    if (n = 0)
        return f;
    else
        n * baz(n - 1);
}

int main(void) {
    printf("%d\n", baz(0));
    return 0;
}
