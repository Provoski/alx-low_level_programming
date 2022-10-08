#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - function finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: string variable
 * @needle: string variable
 * Return: first occurence of substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
