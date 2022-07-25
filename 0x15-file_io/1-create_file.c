#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename : file to create
 * @text_content: text to write in the file
 * Return: 1 on success, -1 oterwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREATE | O_RDRW | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}

	close(fd);

	return (1);
}
