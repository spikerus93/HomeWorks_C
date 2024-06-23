/*
Задача 4. Какое время года
Ввести номер месяца и вывести название времени года.

Данные на входе: Целое число от 1 до 12 - номер месяца.
Данные на выходе: Время года на английском: winter, spring, summer, autumn

Пример №1
Данные на входе: 4
Данные на выходе: spring

Пример №2
Данные на входе: 1
Данные на выходе: winter
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "RU"); 
	setlocale(LC_CTYPE, "Russian");
	
	int month_number;
	
	printf("Enter the number of the Month: ");
	scanf("%d",&month_number);
	
	switch(month_number) 
	{
		case 1: case 2: case 12:
			printf("winter");
			break;
		case 3: case 4: case 5:
			printf("spring");
			break;
		case 6: case 7: case 8:
			printf("summer");
			break;
		case 9: case 10: case 11:
			printf("autumn");
			break;
		default:
			printf("wrong number of month!");
			break; 
	}
	return 0;
}
