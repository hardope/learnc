#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main: Program to print all of the values passed in as arguments
 * 
 * Return: 0, Successful
*/
int main(int argc, char *argv[])
{
     printf("%d\n", argc);
     for (int i = 1; i < argc; i++)
     {
          printf("%s\n", argv[i]);
     }
     return (0);
}