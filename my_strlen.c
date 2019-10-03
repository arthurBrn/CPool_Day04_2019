/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Task 03
*/

void my_putchar(char c);

int my_strlen(char const *str)
{
    int b = 0;
    int c = 0;
    // count the number of caracters
    while (str[b] != '\0') {
        b++;
        c++; // We increment the counter
    }
    my_putchar(c + '0');
}
