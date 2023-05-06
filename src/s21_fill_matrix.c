#include "s21_matrix.h"

void s21_fill_matrix(matrix_t *A){
	for(int i = 0; i < A->rows; i++)
		for(int j = 0; j < A->columns; j++)
			scanf("%lf", &A->matrix[i][j]);
}
