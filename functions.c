#include <stdio.h>

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;   // return the sum
}

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the function
    sum = addNumbers(num1, num2);

    printf("Sum = %d\n", sum);

    return 0;
}