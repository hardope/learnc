#include <stdio.h>
/**
 * add_numbers - Add all numbers before a certain number using a recursive function
 * 
 * @a: Number to be added
 * @b: To keep tract of the addition
 * 
 * Return: None
*/
void add_numbers(int a, int b)
{
     if (a > 0)
     {
          b+=a;
          a--;
          add_numbers(a, b);
     }
     if (a == 0)
     {
          printf("%i\n", b);
     }
}