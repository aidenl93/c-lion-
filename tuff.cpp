#include <stdio.h>

int main(void) {
    int numerator;
    int denominator;
    int num, denom, remainder, gcd;

    printf("enter a fraction");
    scanf("%d/%d",&numerator,&denominator);

    num = numerator;
    denom = denominator;
    while (denom != 0)
    {
        remainder = num % denom;
        num = denom;
        denom = remainder;
    }
    gcd = num;

    numerator = numerator / gcd;
    denom = denominator / gcd;

    printf("%d/%d",numerator,denom);


}