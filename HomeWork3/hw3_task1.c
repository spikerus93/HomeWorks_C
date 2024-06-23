#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "RU"); 
	setlocale(LC_CTYPE, "Russian"); 
	
	int numbers[5];
	int max_number = 0;
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Введите  %d-ое целое число: ", i+1);
		scanf("%d", &numbers[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		if (max_number < numbers[i])
		{
			max_number = numbers[i];
		}
	}
	printf("Максимальное число = %d", max_number);
	return 0;
}
