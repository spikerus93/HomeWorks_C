
/*Задача 3. Все цифры четные
Ввести целое число и определить, верно ли, что все его цифры четные

Данные на входе: Одно целое число
Данные на выходе: YES или NO

Пример №1
Данные на входе: 2684
Данные на выходе: YES

Пример №2
Данные на входе: 2994
Данные на выходе: NO
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "RU"); 
	setlocale(LC_CTYPE, "Russian");
	
	int n;
	printf("Введите целое число: и программа определит, верно ли, что все его цифры четные \n");
	scanf("%d",&n);
	
	_Bool isAllEven = 1; //Предполагаем, что все цифры введенного числа четные.
	while(n > 0)
	{
		if (n / 10 % 2 != 0)
		{
			isAllEven = 0;
			break;
		}
		n /= 10;
	}
	if (isAllEven)
		printf("YES");
	else
		printf("NO");
	return 0;
}
