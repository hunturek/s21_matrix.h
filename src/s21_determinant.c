#include "s21_matrix.h"

int s21_determinant(matrix_t *A, double *result){
	struct matrix_struct temp;
	double t = 0, deg = 1;
	int exit = 0, res = 0;
	if(A->rows != A->columns){
		res = 2;
		exit = 1;
	}
	if(A->rows == 1 && exit == 0){
		*result = A->matrix[0][0];
		exit++;
	}
	if(A->rows == 2 && exit == 0){
		*result = (A->matrix[0][0] * A->matrix[1][1]) - A->matrix[1][0] * A->matrix[0][1];
		exit++;
	}
	if(exit == 0){
		t = 0;
		s21_create_matrix(A->rows - 1, A->columns - 1, &temp);
		for(int j = 0; j < A->rows; j++){
			s21_cut_matrix(A, &temp, 0, j);
			s21_determinant(&temp, &t);
			*result += (deg * A->matrix[0][j] * t);
			deg = -deg;
		}
		s21_remove_matrix(&temp);
	}
	return res;
}
