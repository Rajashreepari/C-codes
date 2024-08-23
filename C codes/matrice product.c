#include <stdio.h>
int main()
{
  int a[10][10], b[10][10], c[10][10];
  int row1, col1, row2, col2, i, j, k;
  printf("Enter the number of rows and columns of the first matrix: ");
  scanf("%d %d", &row1, &col1);
  printf("Enter the elements of the first matrix:\n");
  for (i = 0; i < row1; i++)
   {
    for (j = 0; j < col1; j++)
     {
      scanf("%d", &a[i][j]);
     }
   }
  printf("Enter the number of rows and columns of the second matrix: ");
  scanf("%d %d", &row2, &col2);
  if (col1 != row2)
   {
    printf("Matrices cannot be multiplied.");
    return 0;
   }
  printf("Enter the elements of the second matrix:\n");
  for (i = 0; i < row2; i++)
   {
    for (j = 0; j < col2; j++)
     {
      scanf("%d", &b[i][j]);
     }
   }

// Multiply matrices a and b and store result in c
  for (i = 0; i < row1; i++)
   {
    for (j = 0; j < col2; j++)
     {
      c[i][j] = 0;
      for (k = 0; k < col1; k++)
       {
        c[i][j] += a[i][k] * b[k][j];
       }
     }
   }
  printf("Product of matrices:\n");
  for (i = 0; i < row1; i++)
   {
    for (j = 0; j < col2; j++)
     {
      printf("%d ", c[i][j]);
     }
    printf("\n");
   }
  return 0;
}
