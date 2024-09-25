/*
Задача 6. Заканчивается на a

В файле .txt дано предложение. Необходимо определить, сколько слов
заканчиваются на букву 'а'. Ответ записать в файл .txt.

Данные на входе: Строка из английских букв и пробелов не более 1000
символов.

Данные на выходе: Одно целое число

Пример
Данные на входе: Mama mila ramu
Данные на выходе: 2
*/

#include <stdio.h>
#include <string.h>

const int line_buffer = 1024;

int main() {
	char name_in[] = "input.txt";
	char name_out[] = "output.txt";
    FILE* fin = fopen(name_in, "r");
    FILE* fout = fopen(name_out, "w");
    
    if (fin == NULL || fout == NULL) 
    {
        perror("Error opening files");
        return 1;
    }
    
    char line[line_buffer];
    
    int count = 0;
    
    while(fscanf(fin,"%s",line) == 1)
    {
		if(line[strlen(line) - 1] == 'a')
			count++;
	}
	fprintf(fout,"%d",count);
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
