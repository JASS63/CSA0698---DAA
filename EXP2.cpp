#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int isArmstrong(int n, int digits) {
    if (n == 0) {
        return 0;
    }
    int remainder = n % 10;
    return pow(remainder, digits) + isArmstrong(n / 10, digits);
}

int main() {
    int num, result, digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = countDigits(num);  
    result = isArmstrong(num, digits);  

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
