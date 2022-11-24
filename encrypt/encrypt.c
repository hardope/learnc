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
               if (c[i] > 64 && c[i] < 91)
               {
                    if ((c[i] + key) > 91)
                    {
                         c[i] = (c[i] + key) - 26;
                    }
                    else{
                         c[i]+=key;
                    }
                    printf("%c", c[i]);
               }
               else if (c[i] > 96 && c[i] < 123)
               {
                    if ((c[i] + key) > 123)
                    {
                         c[i] = (c[i] + key) - 26;
                    }
                    else{
                         c[i]+=key;
                    }
                    printf("%c", c[i]);
               }
               else
               {
                    printf("%c", c[i]);
               }
          }
     }
}