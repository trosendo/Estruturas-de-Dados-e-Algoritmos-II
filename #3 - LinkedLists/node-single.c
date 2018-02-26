#include <stdlib.h>

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
}

void node_set(struct node *node, int value){
    node -> element = value;
}

void node_set_next(struct node *current, struct node *next){
    current -> next = next;
}

int node_get(struct node *node){
    return node -> element;
}

struct node *node_get_next(struct node *node){
    return node -> next;
}
