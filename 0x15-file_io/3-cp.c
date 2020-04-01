#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

char *make_buffer(char *f);
void close_file(int fd);

/**
 * make_buffer - Makes a 1024 byte buffer.
 * @f: file buffer is storing chars for
 * Return: The pointer to the new buffer.
 */
char *make_buffer(char *f)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)/*if buffer fails print text and exit with 99*/
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - Closes file descriptors.
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)/*if close fails print exit 100 and text*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another
 * @argc: The number of arguments given
 * @argv: An array of pointers to passed arguments
 * Return: 0 on success
 * Exit code guide
 * Code 97  - wrong # of passed args
 * Code 98  - file_from does not exist or can't be read
 * Code 99  - file_to can't be created or written to
 * Code 100 - file cannot be closed
 */
int main(int argc, char *argv[])
{
	int src, dst, r, w;
	char *buf;

	if (argc != 3)/*Check number of arguments*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = make_buffer(argv[2]); /*Make buf for file to*/
	src = open(argv[1], O_RDONLY);/*Open src file*/
	r = read(src, buf, 1024);/*Read and copy into buffer*/
	dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);/*Open dst fil*/
	while (r > 0)/*Loop until src is copied*/
	{
		if (src == -1 || r == -1)
		{/*If open or read fails, return  exit 98*/
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(dst, buf, r); /*if write fails, exit 99*/
		if (dst == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(src, buf, 1024);
		dst = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buf);
	close_file(src);
	close_file(dst);

	return (0);
}
