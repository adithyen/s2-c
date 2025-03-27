#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n], rowSum, colSum;
    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Row-wise sum:\n");
    for (i = 0; i < m; i++) {
        rowSum = 0;
        for (j = 0; j < n; j++)
            rowSum += matrix[i][j];
        printf("Row %d sum: %d\n", i + 1, rowSum);
    }

    printf("Column-wise sum:\n");
    for (j = 0; j < n; j++) {
        colSum = 0;
        for (i = 0; i < m; i++)
            colSum += matrix[i][j];
        printf("Column %d sum: %d\n", j + 1, colSum);
    }
    return 0;
}
