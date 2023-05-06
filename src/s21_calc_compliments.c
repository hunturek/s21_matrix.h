#include "s21_matrix.h"

int s21_calc_complements(matrix_t *A, matrix_t *result){
	struct matrix_struct temp;
	double res, deg = -1;
	int exit = 0;
	if(A->rows != A->columns)
		exit = 2;
	else{
	if(result->matrix != NULL)
		s21_remove_matrix(result);
	s21_create_matrix(A->rows, A->columns, result);
	for(int i = 0; i < A->rows; i++)
		for(int j = 0; j < A->columns;j++){
			deg = -deg;
			res = 0;
			s21_create_matrix(A->rows-1, A->columns-1, &temp);
			s21_cut_matrix(A, &temp, i, j);
			s21_determinant(&temp, &res);
			result->matrix[i][j] = res * deg;
			s21_remove_matrix(&temp);
		}
	}
	return exit;
}
