/*
Задача 6. Больше среднего

Определить количество положительных элементов квадратной матрицы,
превышающих по величине среднее арифметическое всех элементов главной
диагонали. Реализовать функцию среднее арифметическое главной
диагонали.

Данные на входе: 5 строк по 5 целых чисел через пробел
Данные на выходе: Одно целое число

Пример
Данные на входе: 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5
Данные на выходе: 10
*/

#include <stdio.h>
#define M_SIZE 5

int input(int matrix[][M_SIZE], int m_size)
{
	int i, j;
	
	for (i = 0; i < m_size; i++)
		for(j = 0; j < m_size; j++)
			scanf("%d", &matrix[i][j]);
	return i;
}

double avg_matrix(int matrix[][M_SIZE])
{
	double sum = 0.0;
	
	for(int i = 0; i < 5; i++)
		sum += matrix[i][i];
	return sum / 5.0;
}

int count_positive_elements(int matrix[][M_SIZE], double avg)
{
	int count = 0;
	
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++)
			if(matrix[i][j] > avg && matrix[i][j] > 0)
				count++;
	return count;
}

int main()
{
	int matrix[M_SIZE][M_SIZE];
	
	input(matrix,M_SIZE);
	double avg = avg_matrix(matrix);
	int count = count_positive_elements(matrix,avg);
	
	printf("AVG by Matrix = %.2f\n", avg);
	printf("Count of positive Elements = %d", count);
	
	return 0;
}
