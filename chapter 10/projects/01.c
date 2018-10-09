/***********************************************************************
Modify the stack example of Section 10.2 so that it stores characters
instead of integers. Next add a main function that asks the user to
enter a series of parentheses and/or braces, then indicates whether or
not they're properly nested.
***********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow();
void stack_underflow();

int main(void)
{
    char ch;
    bool is_nested = true;

    printf("\nEnter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch == '(' || ch == '{')
            push(ch);
        if (ch == ')' && pop() != '(')
            is_nested = false;
        if (ch == '}' && pop() != '{')
            is_nested = false;
    }

    if (is_empty() == false) is_nested = false;

    if (is_nested)
        printf("Parentheses/braces are nested properly\n\n");
    else
        printf("Parentheses/braces are not nested properly\n\n");

    return 0;
}

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

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow()
{
    printf("Stack Overflow\n\n");
    exit(EXIT_FAILURE);
}

void stack_underflow()
{
    printf("Stack Underflow\n\n");
    exit(EXIT_FAILURE);
}
