#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    const char *correct_key = "__stack_check";

    printf("Please enter key: ");
    scanf("%99s", input);

    if (strcmp(input, correct_key) == 0) {
        printf("Good job.\n");
    } else {
        printf("Nope.\n");
    }

    return 0;
}
