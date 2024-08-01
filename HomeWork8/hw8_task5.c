/*
Задача 5. Поменять местами

Составить функцию, которая меняет в массиве минимальный и максимальный
элемент местами. Прототип функции
void change_max_min(int size, int a[])

Данные на входе: Функция принимает на вход размер массива и
массив чисел типа int

Данные на выходе: Функция не возвращает значения, измененный
массив сохраняется на месте исходного.

Пример
Данные на входе: 1 2 3 4 5 6 7 8 9 10
Данные на выходе: 10 2 3 4 5 6 7 8 9 1
*/


#include <stdio.h>
#include <stdlib.h>

/*
int input(int *a, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	return i;
}

void printArray(int a[], int n)
{
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}
*/

void change_max_min(int a[], int size)
{
	int min_index = 0;
	int max_index = 0;
	
	for (int i = 1; i < size; i++)
	{
		if(a[i] < a[min_index])
			min_index = i;
		if(a[i] > a[max_index])
			max_index = i;
	}
	
	int temp  = a[min_index];
	a[min_index] = a[max_index];
	a[max_index] = temp;
}

/*
int main()
{
	printf("Enter the Size of Array: \n");
	int n;
	scanf("%d", &n);
	
	int *a = (int *)malloc(n * sizeof(int));
	
	if(a == NULL)
	{
		printf("Error...Isn't the NULL (0)");
		return 1;
	}
	
	input(a,n);
	change_max_min(a,n);
	
	printArray(a,n);
	
	free(a);
	
	return 0;
}
*/
