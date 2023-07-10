#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
* create_array - func
* @size: size of arry
* @c: the char
*
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

ptr = (char *)malloc(size * sizeof(char));
if (size == 0 || ptr == NULL)
{
return NULL;
}
else
{
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
}