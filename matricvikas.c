#include<stdio.h>

#include<conio.h>

int main() {
  int a[5][5], b[5][5], c[5][5], i, j, k, sum = 0, m, n, o, p;

  printf("\nEnter the row of the first matrix: ");
  scanf("%d", &m);

  printf("\nEnter the column of the first matrix: ");
  scanf("%d", &n);
  
  printf("\nEnter the row of the second matrix: ");
  scanf("%d", &o);

  printf("\nEnter the column of the second matrix: ");
  scanf("%d", &p);
      
  if(!m || !n || !o || !p) {
    return 0;
  }
  
  if (n != o) {
    printf("matrix multiplication is not possible");
    printf("\n column of the first matrix must be same as row of the second matrix");
  } else {
    
    printf("\nEnter the first matrix->");
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
        scanf("%d", & a[i][j]);
    
    printf("\nEnter the second matrix->");
    for (i = 0; i < o; i++)
      for (j = 0; j < p; j++)
        scanf("%d", & b[i][j]);
    
    printf("\nThe matrix is \n");
    for (i = 0; i < m; i++) {
      printf("\n");
      for (j = 0; j < n; j++) {
        printf("%d\t", a[i][j]);
      }
    }

    printf("\nThe second matrix is\n");
    for (i = 0; i < o; i++) {
      printf("\n");
      for (j = 0; j < p; j++) {
        printf("%d\t", b[i][j]);
      }
    }
    
    printf("multiply of the matrix=\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < p; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
 
    printf("\nThe multiplication of two matrix is\n");
    for (i = 0; i < m; i++) {
      printf("\n");
      for (j = 0; j < p; j++) {
        printf("%d\t", c[i][j]);
      }
    }
  }
  return 0;
}