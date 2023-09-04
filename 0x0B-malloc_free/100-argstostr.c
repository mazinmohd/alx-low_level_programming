#include "main.h"
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *an, *ret;
	int i, j, tot;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, tot = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, tot++)
			;
		tot++;
	}
	tot++;

	an = malloc(tot * sizeof(char));
	if (an == NULL)
		return (NULL);

	ret = an;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*an = av[i][j];
			an++;
		}
		*an = '\n';
		an++;
	}

	return (ret);
}
