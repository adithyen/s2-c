#include <stdio.h>
int main() {
    int m, n, p, i, j, k;
    printf("Enter dimensions for first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter dimensions for second matrix: ");
    scanf("%d %d", &n, &p);
    int A[m][n], B[n][p], C[m][p];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++)
            scanf("%d", &B[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    printf("Resultant Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}