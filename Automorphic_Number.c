#include <stdio.h>

// Function to check if a number is automorphic
int isAutomorphic(int num) {
    int square = num * num;
    
    while (num > 0) {
        if (num % 10 != square % 10)
            return 0; // Not automorphic
        num /= 10;
        square /= 10;
    }
    
    return 1; // Automorphic
}

// Main function
int main() {
    int number;
    scanf("%d", &number);
    
    if (isAutomorphic(number))
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");
    
    return 0;
}