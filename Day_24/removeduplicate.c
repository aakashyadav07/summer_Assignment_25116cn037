#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        int duplicate = 0;

        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate)
            printf("%c", str[i]);
    }

    return 0;
}