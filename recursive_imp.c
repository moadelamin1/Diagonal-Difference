#include <stdio.h>
#include <stdlib.h>

long long solve(int n, int i, long long primarySum, long long secondarySum, int matrix[n][n]) {
    // Base case: processed all rows
    if (i == n) {
        return llabs(primarySum - secondarySum);
    }

    // Add current diagonal elements
    primarySum += matrix[i][i];
    secondarySum += matrix[i][n - 1 - i];

    // Move to next row
    return solve(n, i + 1, primarySum, secondarySum, matrix);
}

int main() {
    int n;

    // Ask user for matrix size
    printf("Enter size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    printf("Row 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            if (j==n-1 && i<n-1) {
                printf("Row %d:\n", i+2);
            }
        }
    }

    // Compute result
    long long result = solve(n, 0, 0, 0, matrix);

    // Output result
    printf("\nAbsolute difference between diagonal sums = %lld\n", result);

    return 0;
}
