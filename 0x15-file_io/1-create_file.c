#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * create_file - creates and writes to file
 * @filename: file to be created or opened
 * @text_content: text to be written
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len, i;
	char *buf;

	if (filename == NULL)/*Check for null filename */
                return (-1);
	for (len = 0; text_content[len]; len++)
		;
	buf = malloc(sizeof(char) * len);
	if (buf ==  NULL)
		return (-1);
	o = open(filename, O_CREAT | O_WRONLY, 0600);
	for (i = 0; i < len; i++)
		buf[i] = text_content[i];
	w = write(o, buf, len);
	if (o == -1 || w == -1)
	{
		free(buf);
		return (-1);
	}
	close(o);
	return (1);
}
