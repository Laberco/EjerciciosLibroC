#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = &contents[0]; // Creamos el puntero que apunta al primer elemento de contents

void make_empty(void)
{
    top_ptr = &contents[0];
}

bool is_empty(void)
{
    return top_ptr == &contents[0]; 
    /* Comprobamos si top_ptr apunta a la primera direccion del array, lo que indicaria que
    esta vacio*/
}

bool is_full(void)
{
    return top_ptr == &contents[STACK_SIZE];
}

void push(int i)
{
    if (is_full())
        printf("Full\n");
    else
        *top_ptr++ = i;
}

int pop(void)
{
    if(is_empty())
        printf("Empty\n");
    else
        return *--top_ptr;
}

int main(void){
    return 0;
}