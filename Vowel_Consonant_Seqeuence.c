#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char arr[100];
    char k;
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            arr[i] = 'V';
        } else {
            arr[i] = 'C';
        }
    }
    
    k = arr[0];
    printf("%c", k);
    
    for (int i = 1; i < strlen(arr); i++) {
        if (k != arr[i]) {
            k = arr[i];
            printf("%c", k);
        }
    }
    
    return 0;
}