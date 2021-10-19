#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/** Main - reads a text file and prints it to the standard output.
 *  @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = fread(fd, buf, letters);
	nwr = fwrite(STDOUT_FILENO, buf, nrd);

	pclose(fd);

	free(buf);

	return (nwr);
}
