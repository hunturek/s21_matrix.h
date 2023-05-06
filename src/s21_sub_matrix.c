#include "s21_matrix.h"

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result){
	int res = 2;
	if(A->rows == B->rows && A->columns == B->columns){
		res = 0;
		if(result->matrix != NULL)
			s21_remove_matrix(result);
		s21_create_matrix(A->rows, A->columns, result);
		for(int i = 0; i < A->rows; i++)
			for(int j = 0; j < A->columns; j++)
				result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];}
	return res;
}
