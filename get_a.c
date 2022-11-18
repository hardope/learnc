#include "include.c"
/**
 * get_a - This is to get the integers from the user
 * @b: This is the variable we are asking the user for
 * 
 * Return: integer
*/
float get_a(char b)
{
     float a;
     

     printf("Value of %c: ", b);
     scanf("%f", &a);

     printf("\n");

     return (a);
}