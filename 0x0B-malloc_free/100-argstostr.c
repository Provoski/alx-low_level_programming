#include "main.h"
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

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	av_alloc = (char **) malloc(sizeof(char *) * ac);
	if (av_alloc == NULL)
	return (NULL);
	for (index = 1; index <= ac; index++)
	{
		for (av_index = 0; av_index <= ac; av_index++)
		av_alloc[av_index] = av[av_index];
		av_alloc[av_index] = '\0'; 
	}
	return (av_alloc);
}
