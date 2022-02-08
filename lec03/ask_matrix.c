#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
void init_matrix(int* m, int rows, int cols) {
  int i, j;
  for (i = 0; i < rows; i++) {  // for each row i
    for (j = 0; j < cols; j++) { // iterate over each column in row i
        int value;
        printf("Enter a value: \n");
        scanf("%d",&value);
        m[i*cols + j] = value;
    }
  }
}

void print_matrix(int* m, int rows, int cols) {
    int i,j;
    for (i = 0; i < rows; i++) {  // for each row i
        for (j = 0; j < cols; j++) { // iterate over each column in row i
            printf("[%d],[%d]: %d\n",i,j,m[i*cols + j]);
        }
    }

}

int main() {

    int r;
    int c;

    printf("Enter rows: \n");
    scanf("%d", &r);
    printf("Enter columns: \n");
    scanf("%d", &c);

    int* matrix = malloc(sizeof(int) * r * c);
    init_matrix(matrix, r, c);
    print_matrix(matrix,r,c);

    free(matrix);
    matrix = NULL;
}
=======
int main() {
  int nrows = 50;
  int ncols = 100;
  printf("Please enter a number of rows: ");
  scanf(" %d", &nrows);
  printf("\n");

  printf("Please enter a number of cols: ");
  scanf(" %d", &ncols);
  printf("\n");

  int* m = malloc(sizeof(int) * nrows * ncols);

  int i, j;
  for (i = 0; i < nrows; i++) {  // for each row i
    for (j = 0; j < ncols; j++) { // iterate over each column in row i
        printf("\nEnter a value m[%d][%d]: ", i, j);
        int val = 0;
        scanf(" %d", &val);
        m[i*ncols + j] = val;
    }
  }
  printf("\n\nHere is your matrix!\n");

  for (i = 0; i < nrows; i++) {  // for each row i
    for (j = 0; j < ncols; j++) { // iterate over each column in row i
        printf("%d ", m[i*ncols + j]);
    }
    printf("\n");
  }

  free(m);
  m = NULL;
  return 0;
}

>>>>>>> 96f10abbca85925e2617842f4338dc7e72304d13
