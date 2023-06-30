#include "main.h"

/**
 * _strspn - func
 *
 * @s: str
 * @accept: str
 * Return: numb
 */

unsigned int _strspn(char *s, char *accept)
{
    int c, m;
    unsigned int count = 0;

    for (c = 0; s[c] != '\0'; c++)
    {
        if (s[c] != ' ')
        {
            int found = 0;

            for (m = 0; accept[m] != '\0'; m++)
            {
                if (s[c] == accept[m])
                {
                    found = 1;
                    break;
                }
            }

            if (!found)
                return count;

            count++;
        }
        else
        {
            return count;
        }
    }

    return count;
}

