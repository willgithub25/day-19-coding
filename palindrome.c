#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder, originalNumber;

    printf("Enter a number\n ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        reversedNumber =(reversedNumber * 10) + remainder;
        number /= 10;
    }

    if (originalNumber == reversedNumber)
        printf("A palindrome number.\n", originalNumber);
    else
        printf("Not a palindrome number.\n", originalNumber);


    return 0;
}
