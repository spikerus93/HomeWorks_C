
#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "RU"); 
	setlocale(LC_CTYPE, "Russian");
	
	int month_number;
	
	printf("Enter the number of the Month: ");
	scanf("%d",&month_number);
	
	switch(month_number) 
	{
		case 1: case 2: case 12:
			printf("winter");
			break;
		case 3: case 4: case 5:
			printf("spring");
			break;
		case 6: case 7: case 8:
			printf("summer");
			break;
		case 9: case 10: case 11:
			printf("autumn");
			break;
		default:
			printf("wrong number of month!");
			break; 
	}
	return 0;
}
