#include <stdio.h>
int main() {
    int firstMatrix[2][2] = {{1, 2}, {3, 4}};
    int secondMatrix[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
    printf("Product of the matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}


INPUT:
1 2
3 4
5 6
7 8
OUTPUT:
    Product of the matrices:
19 22
43 50


