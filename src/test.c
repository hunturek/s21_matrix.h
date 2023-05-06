#include "s21_matrix.h"

void fill(matrix_t *A){
	int rows, columns;
	printf("Размерность матрицы: ");
	scanf("%d %d", &rows, &columns);
	s21_create_matrix(rows, columns, A);
	printf("Наполнение: ");
	s21_fill_matrix(A);
}

int main(){
  struct matrix_struct a;
  struct matrix_struct b;
  struct matrix_struct res;
  double number;
  s21_create_matrix(1, 1, &res);

	int choise;
	printf("1 eq\n2 sum\n3 sub\n4 num\n5 mult\n6 transp\n7 compl\n8 det\n9 inve\nВыбор: ");
	scanf("%d", &choise);
	switch(choise){
		case 1:
			printf("|1 eq|\n");
			printf("Заполнение первой:\n");
			fill(&a);
			printf("Заполнение второй:\n");
			fill(&b);
			printf("\n");
			s21_view_matrix(a);
			printf("\nVS\n\n");
			s21_view_matrix(b);
			printf("\nAns = %d", s21_eq_matrix(&a, &b));
			break;
		case 2:
			printf("|2 sum|\n");
			printf("Заполнение первой:\n");
			fill(&a);
			printf("Заполнение второй:\n");
			fill(&b);
			printf("\n");
			s21_view_matrix(a);
			printf("\n+\n\n");
			s21_view_matrix(b);
			printf("\n=\n\n");
			s21_sum_matrix(&a, &b, &res);
			s21_view_matrix(res);
			break;
		case 3:
			printf("|3 sub|\n");
			printf("Заполнение первой:\n");
			fill(&a);
			printf("Заполнение второй:\n");
			fill(&b);
			printf("\n");
			s21_view_matrix(a);
			printf("\n-\n\n");
			s21_view_matrix(b);
			printf("\n=\n\n");
			s21_sub_matrix(&a, &b, &res);
			s21_view_matrix(res);
			break;
		case 4:
			printf("|4 num|\n");
			printf("Заполнение матрицы:\n");
			fill(&a);
			printf("Число умножения: ");
			scanf("%lf", &number);
			printf("\n");
			s21_view_matrix(a);
			printf("\n*\n\n");
			printf("%lf\n", number);
			printf("\n=\n\n");
			s21_mult_number(&a, number, &res);
			s21_view_matrix(res);
			break;
		case 5:
			printf("|5 mult|\n");
			printf("Заполнение первой:\n");
			fill(&a);
			printf("Заполнение второй:\n");
			fill(&b);
			printf("\n");
			s21_view_matrix(a);
			printf("\n*\n\n");
			s21_view_matrix(b);
			printf("\n=\n\n");
			s21_mult_matrix(&a, &b, &res);
			s21_view_matrix(res);
			break;
		case 6:
			printf("|6 transp|\n");
			printf("Заполнение матрицы:\n");
			fill(&a);
			printf("\n");
			s21_view_matrix(a);
			printf("\ntranspose\n");
			printf("\n=\n\n");
			s21_transpose(&a, &res);
			s21_view_matrix(res);
			break;
		case 7:	
			printf("|7 compl|\n");
			printf("Заполнение матрицы:\n");
			fill(&a);
			printf("\n");
			s21_view_matrix(a);
			printf("\nmatrix of complements\n");
			printf("\n=\n\n");
			s21_calc_complements(&a, &res);
			s21_view_matrix(res);
			break;
		case 8:	
			printf("|8 det|\n");
			printf("Заполнение матрицы:\n");
			fill(&a);
			printf("\n");
			s21_view_matrix(a);
			printf("\ndeterminant\n");
			printf("\n=\n\n");
			s21_determinant(&a, &number);
			printf("Ans = %lf", number);
			break;
		case 9:
			printf("|9 inve|\n");
			printf("Заполнение матрицы:\n");
			fill(&a);
			printf("\n");
			s21_view_matrix(a);
			printf("\ninverse matrix\n");
			printf("\n=\n\n");
			s21_inverse_matrix(&a, &res);
			s21_view_matrix(res);
			break;
	}
  return 0;
}
