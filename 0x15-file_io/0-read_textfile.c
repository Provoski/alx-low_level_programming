#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * read_textfile - it read text file and print to screen
 * @filename: file to read from
 * @letters: number of byte to read from file
 * Return: lenght of output string on success or 0 on failure
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t i, n;
	char *buff[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	i = read(fd, buff, letters);
	n = write(1, buff, i);
	if (n < 0 || n != letters)
		return (0);
	else
		return (n);
	close(fd);
}
