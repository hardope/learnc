#include <stdio.h>
#include "main.h"

int main(void)
{
     int width, i, j;

     width = get_width();

     for (i = 0; i < width+1; i++)
     {
          for (j = 0; j < i; j++)
          {
               printf("#");
          }
          printf("\n");
     }
     printf("\n");
}

