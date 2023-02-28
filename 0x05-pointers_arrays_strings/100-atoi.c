/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1, num = 0, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
		else if (num > 0)
			break;

		i++;
	}

	return (num * sign);
}
