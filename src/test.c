#include "s21_matrix.h"

int main(){
  struct matrix_struct a;
  struct matrix_struct b;
  struct matrix_struct c;
  struct matrix_struct d;
  struct matrix_struct res;

  s21_create_matrix(1, 1, &res);

  s21_create_matrix(4, 4, &a);
  a.matrix[1][1] = 12.12345678;
  a.matrix[0][0] = 11.115678;
  a.matrix[2][2] = 2;
  a.matrix[3][3] = 3;
  s21_view_matrix(a);

	printf("\n");

  s21_create_matrix(4, 4, &b);
  b.matrix[1][1] = 12.12345679;
  b.matrix[3][3] = 12.423;
  s21_view_matrix(b);
  
  	printf("\n");

  s21_create_matrix(2, 3, &c);
  c.matrix[0][0] = 1;
  c.matrix[0][1] = 2;
  c.matrix[0][2] = 3;
  c.matrix[1][0] = 4;
  c.matrix[1][1] = 5;
  c.matrix[1][2] = 6;
  s21_view_matrix(c);

	printf("\n");

  s21_create_matrix(3, 2, &d);
  d.matrix[0][0] = 1;
  d.matrix[1][0] = 2;
  d.matrix[2][0] = 3;
  d.matrix[0][1] = 4;
  d.matrix[1][1] = 5;
  d.matrix[2][1] = 6;
  s21_view_matrix(d);

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

	s21_mult_matrix(&a, &b, &res);
	s21_view_matrix(res);
	printf("\n");

	s21_mult_matrix(&a, &b, &res);
	s21_view_matrix(res);
	printf("\n");
	
	double det = 0;

	s21_determinant(&a, &det);
	printf("%f\n", det);
  return 0;
}
