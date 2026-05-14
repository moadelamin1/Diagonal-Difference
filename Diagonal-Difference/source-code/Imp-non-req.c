#include <stdio.h>
#include <stdlib.h>

long long diagonalDifference(int n, int matrix[n][n]) {

    long long primarySum = 0;
    long long secondarySum = 0;

    // Loop through matrix rows
    for (int i = 0; i < n; i++) {

        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - 1 - i];

    }

    return llabs(primarySum - secondarySum);
}

int main() {

    int n;

    // Ask user for matrix size
    printf("Enter size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < n; i++) {
	printf("Row %d\n", i + 1);

        for (int j = 0; j < n; j++) {

            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);

        }
    }

    // Compute result
    long long result = diagonalDifference(n, matrix);

    // Output result
    printf("\nAbsolute difference between diagonal sums = %lld\n", result);

    return 0;
}
