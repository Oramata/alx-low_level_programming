#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer value of the string, or 0 if no number is found
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
        {
            sign = -1;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            int digit = s[i] - '0';
            if (sign == 1 && (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)))
            {
                return INT_MAX;
            }
            else if (sign == -1 && (result > -(INT_MIN / 10) || (result == -(INT_MIN / 10) && digit > -(INT_MIN % 10))))
            {
                return INT_MIN;
            }
            else
            {
                result = result * 10 + digit;
            }
        }
        else if (result > 0)
        {
            break;
        }
        i++;
    }
    return sign * result;
}
