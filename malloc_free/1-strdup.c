#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - func this is for func
 * @str: the str
 * Return: True
 */
char *_strdup(char *str)
{
char *ptr;
int len;
int i;
if (str == NULL)
{
	return (NULL);
}
else{
len = strlen(str);
ptr = (char *)malloc((len + 1) * sizeof(char));
if (ptr == NULL)
{
	return (NULL);
}
else
{
for (i = 0; i < len; i++)
{
	ptr[i] = str[i];
}
ptr[i] = '\0';
return (ptr);
free(ptr);
}
}
}
