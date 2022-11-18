#include "main.h"
#include "include.c"
#include <stdio.h>
/**
 * main - This c program to solve quadratic equations
 * 
 * Return: 0 always successful
*/

int main(void)
{
     float a, b, c;
     float d, e;

     a = get_a('a');
     b = get_a('b');
     c = get_a('c');

     d = ((-1 * b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
     e = ((-1 * b) - sqrt((b * b) - (4 * a * c))) / (2 * a);


     printf("a: %i\nb: %i\nc: %i\n", a, b, c);
     printf("x is %f or %f\n", d, e);

     return (0);
}