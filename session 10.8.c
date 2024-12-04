#include <stdio.h>

int main() {
    int n, m;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    int matrix[n][m];
    printf("Nh?p các ph?n t? c?a m?ng:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Ph?n t? [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            for (int k = i + 1; k < n; k++) {
                if (matrix[i][j] > matrix[k][j]) {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[k][j];
                    matrix[k][j] = temp;
                }
            }
        }
    }
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

