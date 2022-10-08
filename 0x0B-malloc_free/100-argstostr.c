#rgstostr.cinclude "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - a function that concatenate all the argument of a peogram
 * @ac: argument counter
 * @av: program argument
 * Return: strings of passed program argument
 */

char *argstostr(int ac, char **av)
{
	char *av_alloc;
	int index;
	int av_index;
	int counter;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (counter = 0; counter < ac; counter++)
	{
		for (index = 0; av[counter][index]; index++)
	}
	av_alloc = (char **) malloc(sizeof(char *) * ac);
	if (av_alloc == NULL)
	return (NULL);
	for (index = 0; index < ac; index++)
	{
		for (av_index = 0; av_index <= ac; av_index++)
		av_alloc[av_index] = *(
;
		av_alloc[av_index] = '\0'; 
	}
	return (av_alloc);
}
