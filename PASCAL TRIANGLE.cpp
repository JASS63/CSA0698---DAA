#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void printPascalTriangle(int numRows) {
    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col <= row; col++) {
            printf("%d ", binomialCoefficient(row, col));
        }
        printf("\n");
    }
}

int main() {
    int numRows;
   
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &numRows);

    printf("Pascal's triangle with %d rows:\n", numRows);
    printPascalTriangle(numRows);

    return 0;
}
