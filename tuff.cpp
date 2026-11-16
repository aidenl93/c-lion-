#include <stdio.h>
#include <ctype.h>

int main ()
{
    char message[100];
    char *left, *right;
    int palindrome = 1;

    printf("enter");
    scanf("%s",message);
    left = message;
    right = message;

    while (*right != '\0')
    {
        right++;
    }


    right-= 1;

    while (left < right)
    {
        // check if each letter is = to each other
    }

}
