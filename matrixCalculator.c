#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "matrixcalculator.h"

void matrixcalculator()
{
    int ar1c1, ar1c2, ar2c1, ar2c2;
    int br1c1, br1c2, br2c1, br2c2;
    int a[2][2];
    int b[2][2];

	printf("\nThis will allow the multiplication of two 2x2 matrices\n");
    printf("Please enter the values in the first matrix (left to right):\n");
    scanf_s("%i %i %i %i %i", ar1c1, ar1c2, ar2c1, ar2c2);
    printf("\nPlease enter the values in the second matrix (left to right):\n");
    scanf_s("%i %i %i %i %i", br1c1, br1c2, br2c1, br2c2);

    a = constructMatrix(ar1c1, ar1c2, ar2c1, ar2c2);
    b = constructMatrix(br1c1, br1c2, br2c1, br2c2);
}

int constructMatrix(int, int, int, int)
{

}


// matrix dimensions so that we dont have to pass them as
// parametersmat1[R1][C1] and mat2[R2][C2]
#define R1 2 // number of rows in Matrix-1
#define C1 2 // number of columns in Matrix-1
#define R2 2 // number of rows in Matrix-2
#define C2 3 // number of columns in Matrix-2

void multiplyMatrix(int m1[][C1], int m2[][C2])
{
    int result[R1][C2];

    printf("Resultant Matrix is:\n");

    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            result[i][j] = 0;

            for (int k = 0; k < R2; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }

            printf("%d\t", result[i][j]);
        }

        printf("\n");
    }
}

// Driver code
int main()
{
    // R1 = 4, C1 = 4 and R2 = 4, C2 = 4 (Update these
    // values in MACROs)
    int m1[R1][C1] = { { 1, 1 }, { 2, 2 } };

    int m2[R2][C2] = { { 1, 1, 1 }, { 2, 2, 2 } };

    // if coloumn of m1 not equal to rows of m2
    if (C1 != R2) {
        printf("The number of columns in Matrix-1 must be "
            "equal to the number of rows in "
            "Matrix-2\n");
        printf("Please update MACROs value according to "
            "your array dimension in "
            "#define section\n");

        exit(EXIT_FAILURE);
    }

    // Function call
    multiplyMatrix(m1, m2);

    return 0;
}