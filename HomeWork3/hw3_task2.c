/*
Задача 2. Наименьшее из пяти чисел
Ввести пять чисел и вывести наименьшее из них

Нужно напечатать наименьшее число

Данные на входе: Пять целых чисел разделенных пробелом
Данные на выходе: Одно целое число

Данные на входе: 4 15 9 56 4
Данные на выходе: 4
*/


#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "RU"); 
	setlocale(LC_CTYPE, "Russian"); 
	
	int numbers[5];
	int min_number = 0;
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Введите  %d-ое целое число: ", i+1);
		scanf("%d", &numbers[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		if (numbers[i] < min_number || min_number == 0)
		{
			min_number = numbers[i];
		}
	}
	printf("Наименьшее число = %d", min_number);
	return 0;
}
