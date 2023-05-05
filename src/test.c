#include "s21_matrix.h"

int main(){
  struct matrix_struct a;
  s21_create_matrix(4, 4, &a);
  a.matrix[1][1] = 12.32456;
  s21_matrix_view(a);
  return 0;
}
