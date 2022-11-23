#include "main.h"
#include <stdio.h>
#include <string.h>

int main (void)
{
     char text[100];
     int key;

     get_input(text);
     key = get_key();
     encrypt(text, key);

     
     printf("Encrypted Text: ");
     printf("%s", text);
}