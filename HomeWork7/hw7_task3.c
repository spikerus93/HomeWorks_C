/*Задача 3. Циклический сдвиг массива вправо на 4

Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4
элемента.

Данные на входе: 12 целых чисел через пробел
Данные на выходе: 12 целых чисел через пробел

Пример №1
Данные на входе: 4 -5 3 10 -4 -6 8 -10 1 0 5 7
Данные на выходе: 1 0 5 7 4 -5 3 10 -4 -6 8 -10

Пример №2
Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 12
Данные на выходе: 9 10 11 12 1 2 3 4 5 6 7 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void arrPrint(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	printf("%d |", arr[i]);
}

void shiftArray(int arr[], int len)
{
	int temp;
	temp = arr[len-1];
	for (int i = len-1; i > 0; i--)
		arr[i] = arr[i-1];
	arr[0] = temp;
}

int main()
{
	enum {aSize = 12};
	int array[aSize];
	
	for (int i = 0; i < aSize; i++)
		scanf("%d", &array[i]);
	for (int i = 0; i < 4; i++)
		shiftArray(array, aSize);
	arrPrint(array, aSize);
	return 0;
}
