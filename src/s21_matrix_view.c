#include "s21_matrix.h"

int s21_matrix_view(matrix_t view){
  for(int i = 0; i < view.rows; i++){
    for(int j = 0; j < view.columns; j++)
      printf("%f ", view.matrix[i][j]);
    printf("\n");
  }
  return 0;
}
