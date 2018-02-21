#include "stdlib.h"
#include "list.h"

struct node {
    struct node *next;
    int element;
};

struct node *node_new(int value, struct node *next){
    struct node *n = malloc(sizeof(struct node));

    if(n != NULL){
        n -> next = next;
        n -> element = value;
    }
    return n;
};

void node_set(struct node *node, int value){
    node -> element = value;
};
int node_get(struct node *node){
    return node -> element;
};

struct node *node_getNext(struct node *node){
    return node -> next;
};
