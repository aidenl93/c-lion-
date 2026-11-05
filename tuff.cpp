#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
double stack[MAX_SIZE];
int topeq = -1;
void push(double value)
{
    if (topeq >= MAX_SIZE - 1)
    {
        printf("overflow");
        exit(1);
    }
    stack[++topeq] = value;
}
double pop()
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
int function()
{
    printf("enter");

    }
