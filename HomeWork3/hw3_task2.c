
#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "RU"); 
	setlocale(LC_CTYPE, "Russian"); 
	
	int numbers[5];
	int min_number = 0;
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Введите  %d-ое целое число: ", i+1);
		scanf("%d", &numbers[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		if (numbers[i] < min_number || min_number == 0)
		{
			min_number = numbers[i];
		}
	}
	printf("Наименьшее число = %d", min_number);
	return 0;
}
