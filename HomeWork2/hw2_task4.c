/*
Задача 4. Найти среднее арифметическое цифр
числа
На вход подается произвольное четырехзначное число
Нужно напечатать среднее арифметическое цифр
Данные на входе: Четырехзначное целое положительное число
Данные на выходе: Вещественное число в формате %.2f
Пример №1:
Данные на входе: 4351
Данные на выходе: 3.25
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	int number;
	printf("Input four digit number: \n");
	scanf("%d",&number);
	
	int sum  = 0;
	for (int i = 0; i < 4; ++i)
	{
		sum += number % 10;
		number /= 10;
	}
	double average = (double)sum/4;
	printf("%.2f",average);
	return 0;
}
