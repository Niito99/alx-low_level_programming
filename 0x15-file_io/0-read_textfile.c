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
	size_t count, value;
	char buf[letters];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	count = letters;

	value = write(fd, buf, count);
	if (value != count)
		return (0);
	write(1, buf, count);

	return (count);

}
