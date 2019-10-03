/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** Task 05
*/

int my_strlen(char const *str);
void my_putchar(char c);

int my_getnbr(char const *str)
{
    int i = 0;
    int isint = 0;
    // We store the length of char without taking in count the signs letter or number
    int length = my_strlen(str);
    
    // If the first char of the char array is a number 
    if (str[0] >= 0 && str[0] <= 9) {
        // We should keep going through the array til we've hit a letter or '-' or smthg

        // Tant que str[i] est un nombre
        while (str[i] >= 0 && str[i] <= 9) {
            // On incrémente i de 1. Ca va nous donner l'indice de ou les nbrs s'arrêtent.
            i++;
        }
        // Si la valeur de i est supérieur à 10 (2 147 483 647)
        if (i > 10) {
            // Ne peut pas être contenu dans un int donc on return null
            return NULL;
        } else { // if it can be contained in an int
            // Call some function here ??
            
        }
    } else if (str[0] == '-' || str[0] == '+') { // If it's something like + or -
        // We go through the signs, until we've hit a number and we count them
        while (str[i] == '-' || str[i] == '+') {

        }
    }
}
