/*
Задача 3. В порядке возрастания
Ввести три числа и определить, верно ли, что они вводились в порядке
возрастания.

Данные на входе: Три целых числа
Данные на выходе: Одно слово YES или NO

Пример
Данные на входе: 4 5 17
Данные на выходе: YES
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "RU"); 
	setlocale(LC_CTYPE, "Russian");
	
	int a, b, c;
	
	printf("Введите три целых числы через пробел: ");
	scanf("%d %d %d",&a, &b, &c);
	
	if((a<=b) && (b <=c))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
