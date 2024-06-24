
/*Задача 4. Перевернуть число
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала
последней и т.д.

Данные на входе: Целое неотрицательное число
Данные на выходе: Целое неотрицательное число наоборот

Пример №1
Данные на входе: 1234
Данные на выходе: 4321

Пример №2
Данные на входе: 782
Данные на выходе: 287
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "RU"); 
	setlocale(LC_CTYPE, "Russian");
	
	int number;
	int reverseNumber;
	
	printf("Введите Целое неотрицательное число и программа «перевернет» его \n");
	scanf("%d",&number);
	
	while(number > 0)
	{
		reverseNumber = reverseNumber * 10 + number % 10;
		number /= 10;
	}
	printf("Целое неотрицательное число наоборот - %d",reverseNumber);
	return 0;
}
