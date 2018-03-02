#include <stdio.h>

#include "trie.h"

char *words[] = {
  "acabais",
  "acocora",
  "amuareis",
  "aramada",
  "arpoavam",
  "azoto",
  "barceiro",
  "barco",
  "cabulais",
  "coragem",
  "corasse",
  "cuja",
  "embarace",
  "ensaquem",
  "enxuguem",
  "festeiro",
  "laringes",
  "mar",
  "propugno",
  "remem",
  "salteada",
  "repudiei",
  "reactive",
  "festa",
  "leque",
  "festarola",
  "achar",
  "enteados",
  "marujar",
  "vinte",
  NULL
};

/*
   Fazer um programa que:

   1. insere todas as palavras em words[] numa trie

   2. confirma que trie_find() as encontra todas

   3. diz quantas palavras existem na trie

   4. mostra as palavras na trie com prefixos "a" "ac" "mar" "por" "vinte"

   5. remove 5 palavras da trie

   6. mostra todas as palavras na trie, antes e depois de remover palavras
*/

int main(void) {
    struct trie *t = trie_new();
    int i = 0;
    while(words[i] != NULL){
        trie_insert(t, words[i]);
        i++;
    }
    if(!trie_empty(t))
        printf("\n + root not null\n");
    else
        printf("\n + bad insert\n");
    printf("\n");

    i = 0;
    while(words[i] != NULL){
        if(trie_find(t, words[i]))
            printf(" + %s found\n", words[i]);
        else
            printf(" + %s not found\n", words[i]);
        i++;
    }

    return 0;
}
