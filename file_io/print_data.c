#include <stdio.h>
/**
 * print_data - Fetch all contacts from file and print
*/
void print_data()
{
     FILE *file;
     char text[100];

     file = fopen("data.txt", "r");
     if (file == NULL)
     {
          printf("Unable to open file\n");
     }

     while (fgets(text, 50, file) != NULL)
     {
          printf("%s", text);
     }

     fclose(file);
}