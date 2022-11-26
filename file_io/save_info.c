#include <stdio.h>
/**
 * save_info - Store new contact
 * 
 * @name: Name of contact to be stored
 * @number: phone number of user to be stored
*/
void save_info(char name[100], char number[100])
{
     FILE *file;

     file = fopen("data.txt", "a");
     if (file == NULL)
     {
          printf("Unable to open file\n");
     }

     fprintf(file, "%s", name);
     fprintf(file, "%s", " : ");
     fprintf(file, "%s\n", number);

     fclose(file);
}