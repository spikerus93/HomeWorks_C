/*
Задача 2. Четные в начало

Написать только одну функцию, которая ставит в начало массива все четные
элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел
между собой. Строго согласно прототипу:
void sort_even_odd(int n, int a[])

Данные на входе: Функция принимает на вход целые числа
Данные на выходе: Отсортированный исходный массив

Пример №1
Данные на входе: 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
Данные на выходе: 20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3 1

Пример №2
Данные на входе: 1 0 1 0 1
Данные на выходе: 0 0 1 1 1
*/

#include <stdio.h>
#include <stdlib.h>

/*
int Input(int a[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	return i;
}

void printArray(int a[], int size)
{
	for(int i = 0; i < size; ++i)
		printf("%d ", a[i]);
	printf("\n");
}
*/

void sort_even_odd(int a[], int n)
{
	int even_index = 0;
	int odd_index = n-1;
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0) //Проверка на четность
		{	// Если элемент четный, перемещаем его в начало;
			int temp = a[i];
			a[i] = a[even_index];
			a[even_index] = temp;
			++even_index;
		} else // Если элемент нечетный, перемещаем его в конец;
		{
			int temp = a[i];
			a[i] = a[odd_index];
			a[odd_index] = temp;
			--odd_index;
		}
	}
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
	
	Input(a,n);
	sort_even_odd(a,n);
	printArray(a,n);
	
	free(a);
	
	return 0;
}
*/
