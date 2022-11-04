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
void copy_file(char *file_from, char *file_to)
{
	int fd1, fd2, buffer_len, read_err, write_err, close_err;
	char buffer[1024];

	fd1 = open(file_from, O_RDONLY);
	read_err = read(fd1, buffer, 1024);
	if ((fd1 == -1) | (read_err == -1))
	{
		write(2, "Error: Can't read from file ", 28);
		write(2, file_from, strlen(file_from));
		write(2, "\n", 1);
		exit(98);
	}
	close_err = close(fd1);
	if (close_err == -1)
	{
		write(2, "Error: Can't close fd ", 22);
		dprintf(2, "%d", fd1);
		write(2, "\n", 1);
		exit(98);
	}
	buffer_len = strlen(buffer);
	fd2 = open(file_to,  O_WRONLY | O_CREAT | O_TRUNC, 00664);
	write_err = write(fd2, buffer, (buffer_len - 2));
	if ((fd2 == -1) | (write_err == -1))
	{
		write(2, "Error: Can't write to file ", 28);
		write(2, file_to, strlen(file_to));
		write(2, "\n", 1);
		exit(99);
	}
	close_err = close(fd2);
	if (close_err == -1)
	{
		write(2, "Error: Can't close fd ", 22);
		dprintf(2, "%d", fd1);
		write(2, "\n", 1);
		exit(100);
	}
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























