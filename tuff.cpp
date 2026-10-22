#include <cmath>
#include <stdio.h>


int main(void) {
    int num1, num2;
    printf("enter two numbers\n");
    scanf("%d%d", &num1, &num2);
    while (num2 != 0) {
    int remainder = num1 % num2;
    num1 = num2;
    num2 = remainder;
    }
    printf("gcd is %d", num1);

    return 0;
}
