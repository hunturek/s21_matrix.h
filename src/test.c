#include "s21_matrix.h"

int main(){
  struct matrix_struct a;
  struct matrix_struct b;
  struct matrix_struct c;
  struct matrix_struct res;

  s21_create_matrix(4, 4, &a);
  a.matrix[1][1] = 12.12345678;
  a.matrix[0][0] = 11.115678;
  s21_view_matrix(a);

	printf("\n");

  s21_create_matrix(4, 4, &b);
  b.matrix[1][1] = 12.12345679;
  b.matrix[3][3] = 12.423;
  s21_view_matrix(b);
  
  	printf("\n");

  s21_create_matrix(2, 5, &c);
  c.matrix[1][0] = 15.2134;
  c.matrix[0][3] = 0.52563;
  s21_view_matrix(c);

	printf("\n");

  s21_sum_matrix(&a, &b, &res);
  s21_view_matrix(res);
	printf("\n");

  s21_sub_matrix(&a, &b, &res);
  s21_view_matrix(res);
	printf("\n");

	s21_mult_number(&b, 1.12423, &res);
	s21_view_matrix(res);
	printf("\n");

	s21_transpose(&c, &res);
	s21_view_matrix(res);
	printf("\n");
  return 0;
}
