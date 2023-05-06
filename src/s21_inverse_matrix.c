#include "s21_matrix.h"

int s21_inverse_matrix(matrix_t *A, matrix_t *result){
	struct matrix_struct temp;
	double det;
	int res = s21_determinant(A, &det);
	if(A->rows == A->columns && res == 0){
		s21_create_matrix(A->rows, A->columns, &temp);
		if(A->matrix != NULL)
			s21_remove_matrix(result);
		res = s21_create_matrix(A->rows, A->columns, result);
		res = s21_calc_complements(A, result);
		res = s21_transpose(result, &temp);
		res = s21_mult_number(&temp, 1/det, result);
	} else res = 2;
	return res;
}
