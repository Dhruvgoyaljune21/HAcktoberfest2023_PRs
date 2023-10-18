#include <stdio.h>

int main() {
    char ch;

    // Using a while loop
    ch = 'z';
    while (ch >= 'a') {
        printf("%c ", ch);
        ch--;
    }
    printf("\n");

    // Using a do-while loop
    ch = 'z';
    do {
        printf("%c ", ch);
        ch--;
    } while (ch >= 'a');
    printf("\n");

    // Using a for loop
    for (ch = 'z'; ch >= 'a'; ch--) {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}
