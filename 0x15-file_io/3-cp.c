#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * copy_file - copy content of file from one to another
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Return: 1 on success, 98 if it can't read from file (file_from)
 * 99 if it can't read to file (file_to)
 */
int copy_file(char *file_from, char *file_to)
{
	int fd1, fd2, len1, len2, buffer_len, err_read, err_write;
	char buffer[1024];

	buffer_len = 0;
	len1 = strlen(file_from);
	len2 = strlen(file_to);
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		write(2, "Error: Can't read from file ", 28);
		write(2, file_from, len1);
		write(2, "\n", 1);
		exit(98);
	}
	err_read = read(fd1, buffer, 1024);
	if (err_read == -1)
		return (98);
	close(fd1);
	buffer_len = strlen(buffer);
	fd2 = open(file_to,  O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd2 == -1)
	{
		write(2, "Error: Can't write to file ", 28);
		write(2, file_to, len2);
		write(2, "\n", 1);
		exit(99);
	}
	err_write = write(fd2, buffer, (buffer_len - 1));
	if (err_write == -1)
		return (99);
	close(fd2);
	return (1);
}

/**
 * main - a program that copy a file contebt into another
 * @argc: argument/command  counter variable
 * @argv: list of passwd argument
 * Return: 1 0n success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}























