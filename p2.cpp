#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isOnlyA(char *str) {
    return (strlen(str) == 1 && str[0] == 'a');
}

bool isAStarBPlus(char *str) {
    int i = 0;
    int len = strlen(str);

    while (i < len && str[i] == 'a') {
        i++;
    }

    if (i == len || str[i] != 'b') return false;

    while (i < len && str[i] == 'b') {
        i++;
    }

    return i == len;
}

bool isExactlyABB(char *str) {
    return (strcmp(str, "abb") == 0);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isOnlyA(str)) {
        printf("Pattern matched: only 'a'\n");
    } else if (isExactlyABB(str)) {
        printf("Pattern matched: exactly 'abb'\n");
    } else if (isAStarBPlus(str)) {
        printf("Pattern matched: a*b+\n");
    } else {
        printf("No pattern matched.\n");
    }

    return 0;
}