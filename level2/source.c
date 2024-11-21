#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void no(void) {
    puts("Nope.");
    exit(1);
}

void ok(void) {
    puts("Good job.");
}

int main(void) {
    char inputstring[24];
    char local_21[9];
    unsigned int resndx;
    int i;
    int local_10;
    
    printf("Please enter key: ");
    local_10 = scanf("%23s", inputstring);
    
    if (local_10 != 1) {
        no();
    }
    if (inputstring[1] != '0') {
        no();
    }
    if (inputstring[0] != '0') {
        no();
    }
    
    fflush(stdin);
    memset(local_21, 0, 9);
    local_21[0] = 'd';
    resndx = 2;
    i = 1;
    
    while (true) {
        size_t sVar2 = strlen(local_21);
        bool bVar4 = false;
        if (sVar2 < 8) {
            sVar2 = strlen(inputstring);
            bVar4 = resndx < sVar2;
        }
        if (!bVar4) break;
        
        char num_str[4] = {inputstring[resndx], 
                          inputstring[resndx + 1], 
                          inputstring[resndx + 2], 
                          '\0'};
        local_21[i] = (char)atoi(num_str);
        resndx = resndx + 3;
        i = i + 1;
    }
    
    local_21[i] = '\0';
    if (strcmp(local_21, "delabere") == 0) {
        ok();
    } else {
        no();
    }
    
    return 0;
}