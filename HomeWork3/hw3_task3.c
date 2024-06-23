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
