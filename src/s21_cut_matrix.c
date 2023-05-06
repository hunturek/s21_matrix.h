#include "s21_matrix.h"

void s21_cut_matrix(matrix_t *A, matrix_t *temp, int r, int c){
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
