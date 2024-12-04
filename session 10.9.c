#include <stdio.h>

int main() {
    int row, col;
    printf("Nhao so dong: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);

    if (row != col) {
        printf("Chi lam voi ma tran vuong).\n");
        return 0;
    }

    int matrix[row][col];
    printf("Nhap cac phan tu cua cac ma tran:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Ph?n t? [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int diagonal[row];
    for (int i = 0; i < row; i++) {
        diagonal[i] = matrix[i][i];
    }
    for (int i = 0; i < row - 1; i++) {
        for (int j = i + 1; j < row; j++) {
            if (diagonal[i] > diagonal[j]) {
                int temp = diagonal[i];
                diagonal[i] = diagonal[j];
                diagonal[j] = temp;
            }
        }
    }
    for (int i = 0; i < row; i++) {
        matrix[i][i] = diagonal[i];
    }
    printf("Ma tran sau khi sap sép theo duong cheo tang dan:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
