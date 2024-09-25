/*
Задача 5. Самое длинное слово

В файле .txt дана строка слов, разделенных пробелами. Найти самое длинное
слово и вывести его в файл .txt. Случай, когда самых длинных слов может быть
несколько, не обрабатывать.

Данные на входе: Строка из английских букв и пробелов. Не более
1000 символов.

Данные на выходе: Одно слово из английских букв.

Пример
Данные на входе: Hello beautiful world
Данные на выходе: beautiful
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
    char res[line_buffer];
    
    int len = 0;
    int max_len = 0;
    
    while(fscanf(fin,"%s",line) == 1)
    {
		len = strlen(line);
		
		if(len > max_len)
		{
			max_len = len;
			strcpy(res,line);
		}
	}
	fprintf(fout,"%s",res);
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
