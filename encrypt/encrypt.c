#include <stdio.h>
#include <string.h>

void encrypt(char c[100], int key)
{
     int i;

     for (i = 0; i < strlen(c); i++)
     {
          if (c[i] == 32)
          {
               continue;
          }
          else
          {
               c[i]+=key;
               c[i] % 127;
               printf("%i", c[i] % 127);
          }
     }
}