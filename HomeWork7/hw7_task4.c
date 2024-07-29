/*
Задача 4. Отсортировать по последней цифре

Считать массив из 10 элементов и отсортировать его по последней цифре.

Данные на входе: 10 целых чисел через пробел
Данные на выходе: Этот же массив отсортированный по последней цифре

Пример №1
Данные на входе: 14 25 13 30 76 58 32 11 41 97
Данные на выходе: 30 11 41 32 13 14 25 76 97 58

Пример №2
Данные на входе: 109 118 100 51 62 73 1007 16 4 555
Данные на выходе: 100 51 62 73 4 555 16 1007 118 109
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void arrPrint(int *arr, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d " , arr[i]);
}

void lastDigitSort(int *arr, int n)
{
	for(int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (arr[i]%10 > arr[j]%10)
			{
			int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	enum {aSize = 10};
	int array[aSize];
	
	for (int i = 0; i < aSize; i++)
		scanf("%d", &array[i]);
	lastDigitSort(array, aSize);
	arrPrint(array, aSize);
	
	return 0;
}
