#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    char correct_key[] = { '_', '_', 's', 't', 'a', 'c', 'k', '_', 'c', 'h', 'e', 'c', 'k', '\0' };

    printf("Please enter key: ");
    scanf("%99s", input);

    if (strcmp(input, correct_key) == 0) {
        printf("Good job.\n");
    } else {
        printf("Nope.\n");
    }

    return 0;
}
