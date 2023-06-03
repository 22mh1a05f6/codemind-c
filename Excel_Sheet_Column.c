#include <stdio.h>
#include <string.h>

void convertToTitle(int N) {
    char result[10];
    int i = 0;
    
    while (N > 0) {
        int rem = (N - 1) % 26;
        result[i++] = 'A' + rem;
        N = (N - 1) / 26;
    }
    
    result[i] = NULL;
    int len = strlen(result);
    
    // Reverse the string
    for (int j = 0; j < len / 2; j++) {
        char temp = result[j];
        result[j] = result[len - j - 1];
        result[len - j - 1] = temp;
    }
    
    printf("%s
", result);
}

int main() {
    int N;
    scanf("%d", &N);
    
    convertToTitle(N);
    
    return 0;
}