#include<stdio.h>

int main()
{
    // Delare and initialize
    // int twoDiArray[2][3] = {{1, 2, 3}, {4, 5, 6}};

    /*
    // Address testing
    int Arr[3][5];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("i = %d || j = %d || Address = %d ", i, j, &Arr[i][j]);
        }
        printf("\n");
    }
    */

    /*
    // How to take input and output
        int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows + 5][cols + 5]; // take advance 5 for prevent overflow data

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    */

    /*
    // Square Matrix:
    [1  2  3]
    [4  5  6]
    [7  8  9]

    // Diagonal Matrix:
    [2  0  0]
    [0  3  0]
    [0  0  4]

    // Scalar Matrix:
    [5  0  0]
    [0  5  0]
    [0  0  5]

    */

    /*
    Check Scaller matrix or not
    First check : if all non-diagonal elements are zero
    if (i != j && matrix[i][j] != 0) {
        flag = 0;
        break;
    }

    Second Check : if all diagonal elements are equal
    if (matrix[i][i] != scalar_value) {
        flag = 0;
        break;
    }
    */

    /*
    // Matrix CF
    int N;
    scanf("%d", &N);

    int A[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int primary_diagonal_sum = 0, secondary_diagonal_sum = 0;

    for (int i = 0; i < N; i++) {
        primary_diagonal_sum += A[i][i];
        secondary_diagonal_sum += A[i][N - i - 1];
    }

    int difference = abs(primary_diagonal_sum - secondary_diagonal_sum);
    printf("%d\n", difference);
    */
    return 0;
}
