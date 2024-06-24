/*Задача 2. Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

Данные на входе: Целое положительное число
Данные на выходе: Одно слово: YES или NO

Пример №1
Данные на входе: 123
Данные на выходе: YES

Пример №2
Данные на входе: 1234
Данные на выходе: NO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "RU"); 
	setlocale(LC_CTYPE, "Russian");
	
	int input, count, n;
	printf("Введите целое число и программа определит, верно ли, что в нём ровно только 3 цифры.\n");
	scanf("%d",&input);
	n = input;
	
	while (n != 0)
	{
		n /= 10; 
		count++;
	}
	
	if (count == 3)
		printf("YES");
	else
		printf("NO");
	return 0;
}
