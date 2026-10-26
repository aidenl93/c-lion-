#include <stdio.h>

int main(void) {
    int numerator;
    int denominator;
    int num, denom, remainder, gcd;

    printf("enter a fraction");
    scanf("%d/%d",&numerator,&denominator);

    num = numerator;
    denom = denominator;
    while (n != 0)
    {
        remainder = num % denom;
        num = denom;
        denom = remainder;
    }
    gcd = num;


}