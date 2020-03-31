#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * create_file - appends text to end of existing file
 * @filename: file to be created or opened
 * @text_content: text to be written
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)/*Check for null filename */
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (len = 0; text_content[len]; len++)
		;
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
