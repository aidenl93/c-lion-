#include <stdio.h>

#define MAX_LEN 100

int main() {

    char msg[MAX_LEN];
    char ch; 
    char *pos = msg;

    printf("enter");
    while (pos < msg + MAX_LEN && (ch = getchar()) != '\n') {
        *pos = ch;
        pos++;
    }
    printf("reversal issss lemme get back to u");
}

