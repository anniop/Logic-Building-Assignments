#include <stdio.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int n;

    // Accept the number of values
    printf("Enter the number of values you want to input: ");
    scanf("%d", &n);

    int numbers[n];

    // Accept each number
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate and display the sum of digits for each number
    for (int i = 0; i < n; i++) {
        printf("The sum of the digits of %d is %d\n", numbers[i], sum_of_digits(numbers[i]));
    }

    return 0;
}
