#include "main.h"

/*
 * read_textfile - reads a text file and prints it to standard
 * output
 * @filename: name of the file to read
 * @letters: number of letters and characters in the file
 * Return: number of letters read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count, value;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY); /* open the file */

	buf = malloc(letters);	/* allocate memory to buffer */
	if (buf == NULL)
		return (0); /* check for malloc */

	count = read(fd, buf, letters); /* the file descriptor is used to read the content of the file into a buffer buf */

	buf[letters] = '\0';
	value = write(STDOUT_FILENO, buf, letters); /* write the buffer to standard output */

	if (count == -1 || value == -1 ||fd == -1)
	{
		free(buf); /* free the memory allocated */
		return (0);
	}

	close(fd);
	free(buf);
	return (value);

}
