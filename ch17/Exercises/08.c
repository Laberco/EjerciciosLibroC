#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int value;
    struct node *next;
};

struct node *top = NULL; // Puntero que apunta al top of stack

void make_empty(void);
int is_empty(void);
bool push(int i);
int pop(void);

int main(void){
    push(10);
    push(12);
    push(20);
    printf("Popped %d\n", pop());

    make_empty();
    printf("Is empty: %d", is_empty());
}

void make_empty(void){
    // para vaciar el stack, tenemos que eliminar todo el contenido de este
    struct node *next_node;
    while(top != NULL){
        next_node = top->next; // next_node apunta al siguiente nodo de la lista
        free(top); // liberamos top
        top = next_node; // Top apunta al siguiente nodo de la lista
    }
}

int is_empty(void){
    if(top == NULL)
        return true;
    else    
        return false;
}

bool push(int i){
    // Funcion para añadir un nuevo elemeto al stack
    struct node *new_node;

    // Reservamos memoria para el nuevo elemento
    if((new_node = malloc(sizeof(struct node))) == NULL) {
        // Indicamos que se produjo un error al reservar memoria
        pritnf("Error: fallo al reservar memoria con malloc");
        return false;
    }
    // guardamos el valor del nuevo nodo
    new_node->value = i;
    new_node->next = top; //
    top = new_node;
    return true;
}

int pop(void){
    // funcion para retirar un elemento del stack
    // Comprobamos si el estack esta vacio
    if(is_empty()){
        printf("Error, stack underflow");
        exit(EXIT_FAILURE);
    }

    int value = top->value;
    struct node *next_node = top->next;
    free(top);
    top = next_node;
    return value;
}