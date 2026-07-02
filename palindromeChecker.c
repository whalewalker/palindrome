#include <stdio.h>

/* Checks whether a given number reads 
the same forwards and backwards */
int isPalindrome(long number) {
    if (number < 0) {
        return 0;
    }
    long remainingDigits = number;
    long reversedNumber = 0;
    while (remainingDigits > 0) {
        long lastDigit = remainingDigits % 10;
        reversedNumber = (reversedNumber * 10) + lastDigit;
        remainingDigits = remainingDigits / 10;
    }
    return reversedNumber == number;
}

int main() {
    long number;

    printf("Enter a whole number: ");
    scanf("%ld", &number);

    if (isPalindrome(number)) {
        printf("%ld is a palindrome.\n", number);
    } else {
        printf("%ld is not a palindrome.\n", number);
    }

    return 0;
}