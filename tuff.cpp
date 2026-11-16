#include <stdio.h>
#include <ctype.h>

int main ()
{
    char message[100];
    char *left, *right;
    int palindrome = 1;

    printf("enter");
    fgets(message, 100, stdin);
    left = message;
    right = message;

    while (*right != '\0')
    {
        right++;
    }


    right-= 1;
    if (*right == '\n')
    {
        right--;
    }

    while (left < right)
    {
        while (left < right && *left == ' ')
        {
            left++;
        }

        while (left < right && *right == ' ')
        {
            right--;
        }

            if (*left != *right)
            {
                palindrome = 0;
                break;
            }
            left++;
            right--;

        }
        if (palindrome == 1)
        {
            printf("palindrome");

        }else
        {
            printf("not palindrome");
        }


    return 0;

}
