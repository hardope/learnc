#include "main.h"
#include <stdio.h>
/**
 * main - A program to save contacts, using a text file as storage
 * 
 * Return: 0, Success
*/
int main(void)
{
     char name[100], number[100];

     printf("Name: ");
     scanf("%s", &name);
     printf("Number: ");
     scanf("%s", &number);
     printf("%s : %s", name, number);
     save_info(name, number);

     printf("\nContacts\n");
     print_data();
     return (0);
}