/*
Задача 1. По одному разу

В файле .txt даны два слова не более 100 символов каждое, разделенные
одним пробелом. Найдите только те символы слов, которые встречаются в
обоих словах только один раз. Напечатайте их через пробел в файл .txt в
лексикографическом порядке.

Данные на входе: Два слова из маленьких английских букв через
пробел. Длинна каждого слова не больше 100 символов.

Данные на выходе: Маленькие английские буквы через пробел.

Пример №1
Данные на входе: hello world
Данные на выходе: o

Пример №2
Данные на входе: aabcd bcef
Данные на выходе: b c
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	char name_in[] = "input.txt";
	char name_out[] = "output.txt";
	
	FILE *f_in = fopen(name_in, "r");
	FILE *f_out = fopen(name_out, "w");
	char word1[100], word2[100];
	
	fscanf(f_in, "%s%s", word1,word2);
	
	int alpha1[26] = {0};
	int alpha2[26] = {0};
	
	int counter = -1;
	
	while(word1[++counter] != '\0')
		++alpha1[word1[counter] - 'a'];
	counter = -1;
	
	while(word2[++counter] != '\0')
		++alpha2[word2[counter] - 'a'];
	for(int i = 0; i < 26; ++i)
		if(alpha1[i] == 1 && alpha2[i] == 1)
			fprintf(f_out, "%c ",i + 97);
	fclose(f_in);
	fclose(f_out);
	
	return 0;
}
