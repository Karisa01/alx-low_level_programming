#include <main.h>
int _strlen(char *s);
{
char a[20] = "Program";
char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
/*using the %zu format specifier to print size_t*/
printf("Length of string a = %zu \n", strlen(a));
printf("Length of string b = %zu \n", strlen(b));
return (0);
}
