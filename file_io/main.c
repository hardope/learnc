#include "main.h"
#include <stdio.h>
/**
 * main - A program to save contacts, using a text file as storage
 * 
 * Return: 0, Success
*/
int main(void)
{
     int a = 0;
     int command;

     while (a == 0)
     {
          printf("Command: ");
          scanf("%i", &command);

          if (command == 0)
          {
               char name[100], number[100];
               printf("\n");
               printf("Name: ");
               scanf("%s", &name);
               printf("Number: ");
               scanf("%s", &number);
               save_info(name, number);
          }
          else if (command == 1)
          {
               printf("\nContacts\n");
               print_data();
               printf("\n");
          }
          else if (command == 2)
          {
               a += 1;
          }

          else
          {
               printf("Invalid Command\n");
          }
     }


     return (0);
}