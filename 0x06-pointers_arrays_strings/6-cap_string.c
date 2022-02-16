#include "main.h"
/**
*cap_string - capitalizes all words of a string
*@s: asd
*Return: s
*/
char *cap_string(char *s)
{

	int a;

	a = 0;

	if (s[a] >= 'a' && s[a] <= 'z')
	{
		s[a] -= 32;
	}

	while (s[a])
	{
		if (s[a] == ' ' || s[a] == '\t' || s[a] == '\n' || s[a] == ','
		|| s[a] == ';' || s[a] == '.' || s[a] == '!' || s[a] == '?' ||
		s[a] == '"' || s[a] == '(' || s[a] == ')' ||
		s[a] == '{' || s[a] == '}')
		{
			if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
			{
				s[a + 1] = s[a + 1] - 32;
			}
		}
		a++;
	}
	return (s);
}
