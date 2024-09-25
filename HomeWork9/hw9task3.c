/*
Задача 3. Числа в массив

В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые
числа и иные символы. Требуется все числа, которые встречаются в строке,
поместить в отдельный целочисленный массив. Например, если дана строка
"data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. Вывести
массив по возрастанию в файл .txt.

Данные на входе: Строка из английских букв, цифр и знаков
препинания

Данные на выходе: Последовательность целых чисел
отсортированная по возрастанию

Пример
Данные на входе: data 48 call 9 read13 blank0a
Данные на выходе: 0 9 13 48
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Функция для поиска и вывода чисел в строке
void findNumbersInString(const char* str, int* numbers, int* length) {
    // Переменные для хранения текущих позиций и числа
    int pos = 0;
    long num = 0;
    
    // Цикл для прохождения по всем символам строки
    while (str[pos] != '\0') 
    {
        // Если текущий символ - цифра
        if (str[pos] >= '0' && str[pos] <= '9')
        {
			while(str[pos] >= '0' && str[pos] <= '9')
			{
				// Преобразование цифры в число
				num = num * 10 + (str[pos] - 48);
				++pos;
			} 
			numbers[(*length)++] = (int)num;
            num = 0;
        } else 
			++pos;
    }
    
}

// Функция сравнения для qsort
int compareInts(const void* a, const void* b) {
    return *((int*)a) - *((int*)b);
}

int main() {
    // Открытие файлов для чтения и записи
    FILE* fin = fopen("input.txt", "r");
    FILE* fout = fopen("output.txt", "w");
    
    if (fin == NULL || fout == NULL) {
        perror("Error opening files");
        exit(EXIT_FAILURE);
    }
    
    // Чтение данных из файла
    char buffer[1000];
    int numbers[1000];
    int length = 0;
    while (fgets(buffer, sizeof(buffer), fin) != NULL) {
        findNumbersInString(buffer, numbers, &length);
    }
    
    // Сортировка чисел
    qsort(numbers, length, sizeof(int), compareInts);
    
    // Запись чисел в выходной файл
    for (int i = 0; i < length; ++i) {
        fprintf(fout, "%d ", numbers[i]);
    }
    
    fclose(fin);
    fclose(fout);
    
    return 0;
}
