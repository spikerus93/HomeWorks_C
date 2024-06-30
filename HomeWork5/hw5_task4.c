/*Задача 4. Сумма от 1 до N
Составить функцию, которая определяет сумму всех чисел от 1 до N и
привести пример ее использования.

Пример №1
Данные на входе: Одно целое положительное число N
Данные на выходе: Целое число - сумма чисел от 1 до N

Пример №2
Данные на входе: 100
Данные на выходе: 5050
*/

#include <stdio.h>

int sum_numbers(int N)
{
	if(N <= 0) //Проверяем если N<=0, то возвращаем 0
		return 0;
	
	int sum = 0;
	for(int i = 1;i <= N;i++)
		sum += i;
	return sum;
}

int main(int argc, char **argv)
{
	int N;
	printf("Enter the number 'N': ");
	scanf("%d",&N);
	printf("Sum of Numbers from 1 till %d: %d\n",N,sum_numbers(N));
	return 0;
}
