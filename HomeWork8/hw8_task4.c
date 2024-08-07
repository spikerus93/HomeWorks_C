/*
Задача 4. Два одинаковых

Написать только одну логическую функцию, которая определяет, верно ли, что
среди элементов массива есть два одинаковых. Если ответ «да», функция
возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
int is_two_same(int size, int a[]);

Данные на входе: Массив из целых чисел
Данные на выходе: Функция возвращает 1 или 0

Пример №1
Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47
48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73
74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99
100
Данные на выходе: NO

Пример №2
Данные на входе: 1 2 1 4 5
Данные на выходе: YES
*/

#include <stdio.h>
#include <stdlib.h>

/*
int input(int *a, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	return i;
}
*/

int is_two_same(int a[], int size)
{
	for(int i = 0; i < size; i++)
		for(int j = i+1; j < size; j++)
			if(a[i] == a[j])
				return 1;
	return 0;
}

/*
int main()
{
	printf("Enter the Size of Array: \n");
	int n;
	scanf("%d", &n);
	
	int *a = (int *)malloc(n * sizeof(int));
	
	if(a == NULL)
	{
		printf("Error...Isn't the NULL (0)");
		return 1;
	}
	
	input(a,n);
	printf(is_two_same(a,n) == 1 ? "YES" : "NO");
	
	free(a);
	
	return 0;
}
*/
