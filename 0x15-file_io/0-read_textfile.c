#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile - reads and prints a file up to a certain number of letters
 * @filename: file to be read
 * @letters: number of letters to be printed
 * Return: actual number of Chars printed, or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;/*(o)pen, (r)ead, (w)rite*/
	char *buf;/*buffer to hold characters*/

	if (filename == NULL)/*Check for null pointer passed*/
		return (0);
	buf = malloc(sizeof(char) * letters);/*malloc Buffer*/
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);/*open the file,  returns file descriptor*/
	r = read(o, buf, letters);/*read the file, returns # read*/
	w = write(STDOUT_FILENO, buf, r);/*write to stdout, returns # written */
	if (o == -1 || r == -1 || w == -1 || r != w)
	{/*check for failure or mismatch*/
		free(buf);/*if so, free and return 0*/
		return (0);
	}

	close(o);
	return (w);
}
