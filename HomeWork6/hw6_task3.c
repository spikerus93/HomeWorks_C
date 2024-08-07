/*Задача 3. Количество 1
Дано натуральное число N. Посчитать количество «1» в двоичной записи
числа.

Данные на входе: Натуральное число
Данные на выходе: Целое число - количество единиц в двоичной записи
числа.

Пример №1
Данные на входе: 5
Данные на выходе: 2

Пример №2
Данные на входе: 255
Данные на выходе: 8
*/

#include <stdio.h>

int sumOne(int n)
{
	if(n / 2 == 0)
		return n % 2;
	return n % 2 + sumOne(n/2);
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("sumOne is count '1' in number %d = %d\n",n,sumOne(n));
	return 0;
}
