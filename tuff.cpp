#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100
int stack[MAX_SIZE];
int topeq = -1;
int op1, op2;
char optor;
void push(int value)
{
    if (topeq >= MAX_SIZE - 1)
    {
        printf("overflow");
        exit(1);
    }
    stack[++topeq] = value;
}
int pop()
{
    if (topeq >= 0)
    {
       return stack[topeq--];
    }
    {    
        printf("enter something");
        exit(1);
    }
}
int main()
{
    printf("enter");
    scanf(" %c", &optor);
    while (true)
    {

        if (optor >= '0' && optor <= '9')
        {
            int number = optor - '0';
            push(number);
            scanf(" %c", &optor);
            continue;
        }
        if (optor == ' ' || optor == '\t')
        {
            continue;
        }
        switch (optor)
        {
        case '+':
            op2 = pop();
            op1 = pop();
            push(op1 + op2);
            break;
        case '-':
            op2 = pop();
            op1 = pop();
            push(op1 - op2);
            break;
        case '*':
            op2 = pop();
            op1 = pop();
            push(op1 * op2);
            break;
        case '/':
            op2 = pop();
            op1 = pop();
            push(op1 / op2);
            break;


        }
        if (topeq >= 0)
        {
            printf("Result: %d\n", stack[topeq]);
        }
        break;
    }
}
