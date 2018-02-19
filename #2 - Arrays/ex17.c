#include <stdio.h>

int my_strlen(char s[]){
    int i = 0;
    char c = s[i];
    while(c != '\0'){
        i++;
        c = s[i];
    }
    return i;
}

int main(){
    //char strings[][45] = {"123", "uma maiorzita", "uma string com \"outra string\" la\' dentro", "\n", "\\n", ""};
    printf("\"123\" (Comprimento %d)\n", my_strlen("123"));
    printf("\"uma maiorzita\" (Comprimento %d)\n", my_strlen("uma maiorzita"));
    printf("\"uma string com \"outra string\" la\' dentro\" (Comprimento %d)\n", my_strlen("uma string com \"outra string\" la\' dentro"));
    printf("\"\\n\" (Comprimento %d)\n", my_strlen("\n"));
    printf("\"%s\\n\" (Comprimento %d)\n", "\\", my_strlen("\\n"));
    printf("\"\" (Comprimento %d)\n", my_strlen(""));
    return 0;
}
