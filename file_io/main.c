#include "main.h"
#include <stdio.h>

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
}