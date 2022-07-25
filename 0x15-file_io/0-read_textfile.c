#include "main.h"

/**
 * read_textfile - reads text file and prints it to stdout
 * @filename: file to be read
 * @letters:number of letters to read and print
 *
 * Return: number of letters printed on success, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int s, t;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	s = read(fd, buff, letters);
	if (s < 0)
	{
		free(buff);
		return (0);
	}
	buff[s] = '\0';

	close(fd);

	t = write(STDOUT_FILENO, buff, s);
	if (t < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (t);
}
