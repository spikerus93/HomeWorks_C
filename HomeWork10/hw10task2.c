/*
Задача 2. Удалить пробелы из текста
В файле .txt необходимо удалить все лишние пробелы (в начале предложения
и сдвоенные пробелы). Для решения задачи разработать функцию. Результат
записать в .txt.
Данные на входе: Строка из английских букв, знаков препинания и
пробелов. Не более 1000 символов.
Данные на выходе: Строка из английских букв, знаков препинания и
пробелов.
Пример
Данные на входе: Hello world!
Данные на выходе: Hello world
*/

#include <stdio.h>
enum States
{
    Start,
    In,
    Out
};
int main()
{
    FILE *f_in = fopen("input.txt", "r");
    FILE *f_out = fopen("output.txt", "w");
    int c, state = Start;
    while ((c = fgetc(f_in)) != EOF)
    {
        switch (state)
        {
        case Start:
            if (c != ' ')
            {
                state = In;
                fputc(c, f_out);
            }
            break;
        case In:
            if (c == ' ')
                state = Out;
            else
                fputc(c, f_out);
            break;
        case Out:
            if (c != ' ')
            {
                state = In;
                fputc(' ', f_out);
                fputc(c, f_out);
            }
            break;
        }
    }
    fclose(f_in);
    fclose(f_out);
    return 0;
}
