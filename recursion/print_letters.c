#include <stdio.h>
/**
 * print_letters - to print all letters starting from the letter passed as input
 * using the recursive method
 * 
 * @c: The letter to start printing from
*/
void print_letters(char c)
{
     if (c <= 'z')
     {
          printf("%c", c);
          print_letters(c+1);
     }
}