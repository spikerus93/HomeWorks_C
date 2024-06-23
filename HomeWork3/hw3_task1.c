/*
Задача 1. Наибольшее из пяти чисел
Ввести пять чисел и вывести наибольшее из них

Нужно напечатать наибольшее число

Данные на входе: Пять целых чисел разделенных пробелом
Данные на выходе: Одно целое число

Данные на входе: 4 15 9 56 4
Данные на выходе: 56
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "RU"); 
	setlocale(LC_CTYPE, "Russian"); 
	
	int numbers[5];
	int max_number = 0;
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Введите  %d-ое целое число: ", i+1);
		scanf("%d", &numbers[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		if (max_number < numbers[i])
		{
			max_number = numbers[i];
		}
	}
	printf("Наибольшее число = %d", max_number);
	return 0;
}
