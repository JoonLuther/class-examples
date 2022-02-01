#include <stdio.h>
#include <stdlib.h>

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