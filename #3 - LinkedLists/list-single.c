#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "list.h"
#include "node.h"


struct list {
    struct node *head;
    struct node *tail;
    int size;
};

struct list *list_new(){    //working
    struct list *l = malloc(sizeof(struct list));
    if(l != NULL){
        l -> head = NULL;
        l -> size = 0;
    }
    return l;
};

bool list_empty(struct list *list){ //working
    return list -> size == 0;
}

bool list_insert(struct list *list, int value){ //working
    struct node *n = node_new(value, list -> head);
    if(n == NULL)
        return false;
    list -> head = n;
    list -> size ++;
    return true;
}

bool list_remove(struct list *list, int value){ //working
    struct node *current = list -> head;
    struct node *previous = NULL;
    int c = 0;
    if(list -> size == 0)
        return false;
    while (node_get(current) != value) {
        if(c + 1 == list -> size) // it is last element
            return false;
        else {
            previous = current;
            current = node_get_next(current);
        }
    }
    if(current == list -> head)
        list -> head = node_get_next(list -> head);
    else {
        node_set_next(previous, node_get_next(current));
    }
    list -> size--;
    return true;
}

void list_print(struct list *list){ //working
    struct node *current = list -> head;
    printf("[");
    int c = 0;
    while(current != NULL){
        if(c == 0)
            printf("%d", node_get(current));
        else
            printf(" %d", node_get(current));
        current = node_get_next(current);
        c++;
    }
    printf("]\n");
}

int list_find(struct list *list, int value){
    int size = list -> size;
    if(size > 0){
        struct node *current = list -> head;
        for(int i = 0; i < size; i++){
            if(node_get(current) == value)
                return i;
            current = node_get_next(current);
        }
    }
    return -1;
}

void list_destroy(struct list *list){
    free(list);
    list -> head = NULL;
}

int list_length(struct list *list){ //working
    return list -> size;
}

int list_nth(struct list *list, int n){ //working
    int size = list -> size;
    if(size > 0){
        struct node *current = list -> head;
        for(int i = 0; i < size; i++){
            if(i == n)
                return node_get(current);
            current = node_get_next(current);
        }
    }
    return -1;
}
