#include <stdio.h>
#include <string.h>

int my_strlen(char str[]){
    int i = 0;
    char c = str[i];
    while(c != '\0'){
        i++;
        c = str[i];
    }
    return i;
}

int my_strcmp(char str1[], char str2[]){
    int str1len = my_strlen(str1);
    int str2len = my_strlen(str2);
    int max = str1len > str2len ? str1len : str2len;
    for(int i = 0; i < max; i++){
        if(str1[i] != str2[i])
            return (str1[i] - str2[i] < 0) ? -1 : 1;
    }
    return 0;
}

int main(){
    int my__strcmp = my_strcmp("Tomas", "tomas");
    int c_strcmp = strcmp("Tomas", "tomas");
    printf("My = %d\n", my__strcmp);
    printf("C = %d\n", c_strcmp);
    return 0;
}
