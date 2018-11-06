/**********************************************************************************
Modify Programming Project 6 from Chapter 10 so that it includes the
following function:

int evaluate_RPN_expression(const char *expression);

The function returns the value of the RPN expression pointed to by
expression.
***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>  /* exit */
#include <ctype.h>   /* isdigit */
#include <stdbool.h> /* C99+ only */

#define STACK_SIZE 100
#define LEN 100

/* external variables */
char contents[STACK_SIZE] = {0};
int top = 0;

int evaluate_RPN_expression(const char *expression);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {

    char expression[LEN+1];

    while(true) {

        printf("Enter an RPN expression: ");
        fgets(expression, LEN, stdin);
        printf("Value of expression: %d", evaluate_RPN_expression(expression));
    }
}

int evaluate_RPN_expression(const char *expression)
{
    const char *p = expression;
    int op1, op2;

    for (; *p != '\n'; p++) 
    {
        switch(*p) 
        {
              case '+': case '-': case '*': case '/':
                op1 = pop();
                op2 = pop();
        }
        if (*p >= '0' && *p <= '9')
            push(*p - '0');
        else if (*p == '+')
            push(op1 + op2);
        else if (*p == '-')
            push(op1 - op2);
        else if (*p == '*')
            push(op1 * op2);
        else if (*p == '/')
            push(op1 / op2);
        else if (*p == '=')
            break;
        else if (*p != ' ')
        {
            printf("\n");
            exit(EXIT_SUCCESS);
        }
    }
    if (top > 1)
    {
        printf("Too many operands in expression\n\n");
        exit(EXIT_FAILURE);
    }
    return pop();
}


void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(char i) {

    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void) {

    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void) {
    printf("\nExpression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("\nNot enough operands in expression\n");
    exit(EXIT_FAILURE);
}
