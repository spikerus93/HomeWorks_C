/*
Задача 6. Чаще других

Дан массив из 10 элементов. Определить, какое число в массиве встречается
чаще всего. Гарантируется, что такое число ровно 1.

Данные на входе: 10 целых числе через пробел
Данные на выходе: Одно число, которое встречается чаще других.

Пример
Данные на входе: 4 1 2 1 11 2 34 11 0 11
Данные на выходе: 11
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int anyTimesNumber(int *arr, int len)
{
	int count[len];
	for (int i = 0; i < len; i++)
		count[i] = 0;
	int maxCount = 0;
	int maxElement = 0;
	for(int i = 0; i < len; ++i)
		for (int j = i+1; j < len; ++j)
			if (arr[i] == arr[j])
				count[i]++;
	
	for (int i = 0; i < len; i++)
	{
		if (count[i] > maxCount)
		{
			maxCount = count[i];
			maxElement = i;
		}
	}
	return arr[maxElement];
}

int main()
{
	enum {aSize = 10};
	int array[aSize];
	
	for (int i = 0; i < aSize; i++)
		scanf("%d", &array[i]);
	printf("%d", anyTimesNumber(array, aSize));
	
	return 0;
}
