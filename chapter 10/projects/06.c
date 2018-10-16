/***********************************************************************************
Some calculators (notably those from Hewlet-Packard) use a system of writing
mathematical expressions known as Reverse Polish Notation (RPN). In this
notation, operators are placed after those operands instead of between their
operands. For example, 1 + 2 would be written 1 2 + in RPN, and
1 + 2 * 3 would be written 1 2 3 * +. RPN expressions can easily be evaluated
using a stack. The algorithm involves reading the operators and operands in
an expression from left to right.
Write a program that evaulates RPN expressions. The operands will be
single-digit integers. The operators are +, -, *, /, and =. The = operator
causes the top stack item to be displayed; afterwards, the stack is cleared
and the user is prompted to enter another expression. The process continues
until the user enters a character that is not an operator or operand:
************************************************************************************/

#include <stdio.h>
#include <stdlib.h>  /* exit */
#include <ctype.h>   /* isdigit */
#include <stdbool.h> /* C99+ only */

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {

    char ch, op1, op2;

    while(true) {

        printf("Enter an RPN expression: ");

        while ((ch = getchar()) != '\n') {
            if (isdigit(ch))
                return 0;
            else
                switch(ch) {
                    case '+': push(pop() + pop());
                              break;
                    case '-': op2 = pop();
                              op1 = pop();
                              push(op1 - op2);
                              break;
                    case '*': push(pop() * pop());
                              break;
                    case '/': op2 = pop();
                              op1 = pop();
                              push(op1 / op2);
                              break;
                    case '=': printf("Value of expression: %d\n", pop());
                              break;
                    case ' ': break;
                    default:  exit(EXIT_FAILURE);
                }
        }
    }
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
