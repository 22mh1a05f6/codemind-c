#include <stdio.h>

// Function to calculate the GCD (Greatest Common Divisor) of two numbers
int calculateGCD(int num1, int num2) {
    while (num2 != 0) {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    
    return num1;
}

// Function to calculate the LCM (Least Common Multiple) of two numbers
int calculateLCM(int num1, int num2) {
    int gcd = calculateGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    
    return lcm;
}

// Main function
int main() {
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    int lcm = calculateLCM(num1, num2);
    
    printf("%d
",lcm);
    
    return 0;
}