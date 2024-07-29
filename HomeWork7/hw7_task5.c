/*
Задача 5. Вторая с конца ноль

Считать массив из 10 элементов и отобрать в другой массив все числа, у
которых вторая с конца цифра (число десятков) – ноль.

Данные на входе: 10 целых чисел через пробел.
Данные на выходе: Целые числа через пробел, у которых вторая с конца
цифра - ноль

Пример
Данные на входе: 40 105 203 1 14 1000 22 33 44 55
Данные на выходе: 105 203 1 1000
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void arrPrint(int *arr, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d " , arr[i]);
}

int byZeroSort(int *arr, int *newArr, int n)
{
	unsigned int pos = 0;
	for(int i = 0; i < n; ++i)
	{
		if (arr[i]/10%10 == 0)
		{
			newArr[pos] = arr[i];
			pos++;
		}
	}
	return pos;
}

int main()
{
	enum {aSize = 10};
	int array[aSize];
	int newArray[aSize];
	
	for (int i = 0; i < aSize; i++)
		scanf("%d", &array[i]);
	arrPrint(newArray, byZeroSort(array, newArray, aSize));
	
	return 0;
}
