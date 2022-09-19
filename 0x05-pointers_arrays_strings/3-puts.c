#include "main.h"
#include <stdio.h>
/**
* _puts - function that prints a string, followed by a new line, to stdout	*
* @str: pointer type char
* Return: Always 0 (Success)
*/
void puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar ('\n');
}
}
