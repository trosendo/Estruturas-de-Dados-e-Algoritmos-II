#include <stdio.h>

int findNull(char s[]){
    int i = 0;
    char c = s[i];
    while(c != '\0'){
        i++;
        c = s[i];
    }
    return i;
}

int main() {
    char s[] = "Hello World!";
    int i = findNull(s);
    printf("%d\n", i);
    return 0;
}
