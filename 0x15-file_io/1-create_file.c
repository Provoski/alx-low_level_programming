#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * create_file - a functuon that create file
 * @filename: name if fill
 * @text_content: text content of file
 * Return: 1 on success or -1 in failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	len = strlen(text_content);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_RDONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
	{
		write(1, "fails", 5);
		return (-1);
	}
	if (write(fd, text_content, len))
	{
		return (1);
	}
	else
		return (-1);
	close(fd);
}
