#include <stdio.h>

// Function to reverse an integer
int reverseInteger(int num) {
    int reversedNum = 0;
    
    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    return reversedNum;
}

// Main function
int main() {
    int num;
    
    scanf("%d", &num);
    
    int reversedNum = reverseInteger(num);
    
    printf("%d
", reversedNum);
    
    return 0;
}