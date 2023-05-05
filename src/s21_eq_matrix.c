#include "s21_matrix.h"

#define SUCCESS 1
#define FAILURE 0

int compare_7(double x, double y){
	int res = 1;
	for(int i = 0; i < 7; i++){
		if(trunc(x) == trunc(y)){
			x *= 10;
			y *= 10;
		} else res = 0;
	}
	return res;
}

int s21_eq_matrix(matrix_t *A, matrix_t *B){
	int res = -1;
	if(A->rows == B->rows && A->columns == B->columns)
		res++;
		for(int i = 0; i < A->rows; i++)
			for(int j = 0; j < A->columns; j++)
				res += compare_7(A->matrix[i][j], B->matrix[i][j]);
	if(res == A->rows * A->columns) res = SUCCESS;
	else res = FAILURE;
	return res;
}
