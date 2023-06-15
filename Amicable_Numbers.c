#include <stdio.h>

// Function to calculate the sum of proper divisors of a number
int sumOfDivisors(int num) {
    int sum = 0;
    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    
    return sum;
}

// Main function
int main() {
    int num1, num2;
    
    scanf("%d", &num1);
    
    scanf("%d", &num2);
    
    int sum1 = sumOfDivisors(num1);
    int sum2 = sumOfDivisors(num2);
    
    if (num1 == sum2 && num2 == sum1) {
        printf("Amicable
");
    } else {
        printf("Not Amicable
");
    }
    
    return 0;
}