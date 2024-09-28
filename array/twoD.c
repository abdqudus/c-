#include <stdio.h>
#define SIZE_1 4  // Number of rows in matrix A
#define SIZE_2 4  // Number of columns in matrix A, rows in matrix B
#define SIZE_3 4  // Number of rows in matrix B
#define SIZE_4 4  // Number of columns in matrix B

// Function prototype for multiplyMatrix
int multiplyMatrix();

int main() {
    multiplyMatrix();  // Calling the function to multiply matrices
    return 0;          // Return 0 to indicate successful execution
}

int multiplyMatrix() {
    // Declare matrices
    int c[SIZE_1][SIZE_4] = {0};  // Result matrix initialized to zero
    int a[SIZE_1][SIZE_2] = {
        {1, 2, 3,4},
        {5, 6, 7,8},
        {9, 10, 11,12},
        {13, 14, 15,16}
    };
    int b[SIZE_3][SIZE_4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
         {13, 14, 15,16}
    };

    // Check if matrix multiplication is valid (SIZE_2 must equal SIZE_3)
    if (SIZE_2 != SIZE_3) {
        printf("Matrix multiplication is not possible: incompatible sizes.\n");
        return 0;
    }

    // Multiply matrices a and b, store the result in matrix c
    for (size_t i = 0; i < SIZE_1; i++) {         // Loop over rows of a
        for (size_t j = 0; j < SIZE_4; j++) {     // Loop over columns of b
            for (size_t k = 0; k < SIZE_3; k++) { // Perform dot product
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the resulting matrix c
    printf("Resulting matrix after multiplication:\n");
    for (size_t i = 0; i < SIZE_1; i++) {
        for (size_t j = 0; j < SIZE_4; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
