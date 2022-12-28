// Practical No 03- Matrix Operation Using Add, Sub, Multi

#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}
--------------------------------------------------
// Subtraction
// Matrix Subtraction,2D (dimensional) 
/

#include <stdio.h>

int main()
{
    int rowCount, columnCount, i, j;
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];

    printf("Number of rows of matrices to be subtracted : ");
    scanf("%d", &rowCount);

    printf("Number of columns matrices to be subtracted : ");
    scanf("%d", &columnCount);

    printf("Elements of first matrix : \n");

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &firstMatrix[i][j]);

    printf("Elements of second matrix : \n");

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &secondMatrix[i][j]);

    printf("Difference of entered matrices : \n");

    for (i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
            printf("%d\t",resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
---------------------------------------------------------------------------
// Multiplication
#include<stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10], n, i, j, k;

    printf("Enter the value of N (N <= 10): ");
    scanf("%d", & n);
    printf("Enter the elements of Matrix-A: \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
-----------------------------------------------------------------