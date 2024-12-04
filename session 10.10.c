#include <stdio.h>

int main() {
    int dong, cot;
    printf("Nhap so dong: ");
    scanf("%d", &dong);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    if (dong != cot) {
        printf("Chi lam voi ma tran vuong.\n");
        return 0;
    }

    int matrix[dong][cot];
    printf("Nhap cac phan tu cua cac ma tran:\n");
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int cheo[dong];
    for (int i = 0; i < dong; i++) {
        cheo[i] = matrix[i][cot - i - 1];
    }
    for (int i = 0; i < dong - 1; i++) {
        for (int j = i + 1; j < dong; j++) {
            if (cheo[i] < cheo[j]) {
                int temp = cheo[i];
                cheo[i] = cheo[j];
                cheo[j] = temp;
            }
        }
    }
    for (int i = 0; i < dong; i++) {
        matrix[i][cot - i - 1] = cheo[i];
    }
    printf("Ma tran sau khi sap sep:\n");
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
