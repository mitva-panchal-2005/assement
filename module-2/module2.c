#include <stdio.h>

#define MAX 10

// Function to take input from user
void inputMatrix(int matrix[MAX][MAX], int rows, int cols, int num) {
    printf("------------ Matrix %d ------------\n", num);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX],
                      int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    // Matrix multiplication condition
    if (c1 != r2) {
        printf("Matrix multiplication not possible! Columns of Matrix 1 must equal Rows of Matrix 2.\n");
        return 0;
    }

    inputMatrix(A, r1, c1, 1);
    inputMatrix(B, r2, c2, 2);

    printf("\nMatrix 1:\n");
    displayMatrix(A, r1, c1);

    printf("\nMatrix 2:\n");
    displayMatrix(B, r2, c2);

    multiplyMatrices(A, B, result, r1, c1, c2);

    printf("\n-------- Result: Multiplication Matrix --------\n");
    displayMatrix(result, r1, c2);

    return 0;
}