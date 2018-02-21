#include "stdbool.h"
#include "stdlib.h"
#include "list.h"
#include "node.h"

struct list {
    struct node *head;
    struct node *tail;
    int size;
};

struct list *list_new(){
    struct list *l = malloc(sizeof(struct list));
    l -> head = NULL;
    l -> tail = NULL;
    l -> size = 0;
    return l;
};

bool list_empty(struct list *list){
    return list -> size == 0;
};

bool list_insert(struct list *list, int value){

    struct node *n = node_new(value, list -> head);

    if(n == NULL)
        return false;

    list -> head = n;
    list -> size ++;
    return true;
};

bool list_remove(struct list *list, int value){
    return false;
};

void list_print(struct list *list){

};

int list_find(struct list *list, int value){
    return 0;
};

void list_destroy(struct list *list){

};

int list_length(struct list *list){
    return list -> size;
};

int list_nth(struct list *list, int n){
    return 0;
};
