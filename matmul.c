#include <stdio.h>
int main() {
    int m, n, p, q;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Matrix multiplication is not possible!\n");
        return 1;
    }
    int A[m][n], B[p][q], C[m][q];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
