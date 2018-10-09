/**************************************************************************
One way to implement a stack in C is to store its items in an array,
which we'll call contents. A separate integer variable named top 
marks the position of the stack top. When the stack is empty, top
has value 0. To push an item on the stack, we simply store the item
in contents at the position indicated by top, then increment top. 
Popping an item requires decrementing top, then using it as an index
into contents to fetch the item that's being popped.
Based on this outline, here's a program fragment that implements a stack:
**************************************************************************/


#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

/*external variables*/
int contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if(is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if(is_empty())
        stack_underflow();
    else
        return contents[--top];
}