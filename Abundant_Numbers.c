#include <stdio.h>

// Function to check if a number is an abundant number
int isAbundantNumber(int num) {
    int sum = 0;
    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum > num) {
        return 1; 
    }
    
    return 0; 
}
int main() {
    int num;
    
    scanf("%d", &num);
    
    if (isAbundantNumber(num)) {
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}