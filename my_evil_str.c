/*
** EPITECH PROJECT, 2019
** my_evil_str
** File description:
** Task 04
*/

int my_strlen(char const *str);

char *my_evil_str(char *str)
{
    int i = 0;
    int length = my_strlen(str);
    int half = size / 2;
    char swap;
    
    for (i; i < half; i++) {
        swap = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = swap;
    }
    return str;
}
