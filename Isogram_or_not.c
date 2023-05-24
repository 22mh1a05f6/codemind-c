#include <stdio.h>
#include <string.h>

int isIsogram(const char *str) {
    int length = strlen(str);

    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                return 0; // Not an isogram
            }
        }
    }

    return 1; // Is an isogram
}

int main() {
    char word[100];
    scanf("%s", word);
    if (isIsogram(word)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}