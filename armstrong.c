#include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    printf("Enter a  number\n ");
    scanf("%d", &number);

    originalNumber = number;

    // count the number of digits
    while (originalNumber != 0) {
        n=n+1;
        originalNumber /= 10;
    }

    originalNumber = number;

    // calculate the result
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        int i = 1, temp = remainder;
        while (i < n) {
            temp *= remainder;
            i=i+1;
        }
        result += temp;
        originalNumber /= 10;
    }


    if (result == number)
        printf("Armstrong number.");
    else
        printf("Not an Armstrong number.");

    return 0;
}
