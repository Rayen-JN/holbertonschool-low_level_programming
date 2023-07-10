#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - this is a fun
 * @s1: string number 1
 * @s2: string numbeerr2
 * @Return: True
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1;
	int len2;
	int i;
	if(s1 == NULL || s2 == NULL)
	{
		return ('\0');
	}
	else if(s1 == NULL && s2 == NULL)
	{
		return ('\0');
	}

	else
	{
		len1 = strlen(s1);
		len2 = strlen(s2);


		ptr = (char*)malloc(((len1 + len2) +1) * sizeof(char));
		if(ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < (len1 + len2); i++ )
			{
				if (i < len1)
				{
					ptr[i] = s1[i];
				}
				else
				{
					ptr[i] = s2[i - len1];
				}

			}
			ptr[i] = '\0';
			return ptr;
			free(ptr);
		}
	}
}
