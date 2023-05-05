#include "s21_matrix.h"

double mult_elem(matrix_t *A, matrix_t *B, int r, int c){
	double res = 0;
		for(int i = 0; i < A->columns; i++)
			res += A->matrix[r][i] * B->matrix[i][c];
	return res;
}

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result){
	int res = 0;
	if(A->rows == B->columns && A->columns == B->rows){
		if(result->matrix != NULL)
			s21_remove_matrix(result);
		s21_create_matrix(A->rows, A->rows, result);
		for(int i = 0; i < A->rows; i++)
			for(int j = 0; j < A->rows; j++)
				result->matrix[i][j] = mult_elem(A, B, i, j);
	} else res = 2;
	return res;
}
