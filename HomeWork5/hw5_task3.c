/*Задача 3. Сумма цифр равна произведению
 * 
Составить логическую функцию, которая определяет, верно ли, что в заданном
числе сумма цифр равна произведению: int is_happy_number(int n)

Данные на входе: Целое не отрицательное число
Данные на выходе: YES или NO

Пример №1
Данные на входе: 123
Данные на выходе: YES

Пример №2
Данные на входе: 528
Данные на выходе: NO
*/

#include <stdio.h>

int happy_number(int number)
{
	if(number < 0)
		number = -number; //Если число отрицальное, то преобразуем его в положительное
	
	int sum = 0;
	int product = 1;
	
	while(number > 0)
	{
		sum  += number % 10;
		product *= (number % 10);
		number /= 10;
	}
	return sum == product ? 1 : 0;
}

int main(int argc, char **argv)
{
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	
	if (happy_number(number))
		printf("YES");
	else
		printf("NO");
	return 0;
}
