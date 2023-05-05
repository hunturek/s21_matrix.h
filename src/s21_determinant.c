#include "s21_matrix.h"

void delete_rc(matrix_t *A, matrix_t *temp, int r, int c){
	int off_row = 0, off_col = 0;
	for(int i = 0; i < A->rows-1; i++){
		if(i == r)
			off_row++;
		off_col = 0;
		for(int j = 0; j < A->columns-1; j++){
			if(j == c)
				off_col++;
			temp->matrix[i][j] = A->matrix[i+off_row][j+off_col];
		}
	}
}

int s21_determinant(matrix_t *A, double *result){
	struct matrix_struct temp;
	double deg = 1;
	int exit = 0;
	if(A->rows == 1){
		*result = A->matrix[0][0];
		exit++;
	}
	if(A->rows == 2 && exit == 0){
		*result = A->matrix[0][0] * A->matrix[1][1] + A->matrix[1][0] * A->matrix[0][1];
		exit++;
	}
	if(exit == 0){
		s21_create_matrix(A->rows - 1, A->columns - 1, &temp);
		for(int j = 0; j < A->rows; j++){
			delete_rc(A, &temp, 0, j);
			*result = *result + (deg * A->matrix[0][j] * s21_determinant(&temp, result));
			deg = -deg;
		}
		s21_remove_matrix(&temp);
	}
	return exit;
}
