#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a new file and writes text to it
 * @filename: a pointer to a string containing the filename
 * @text: a pointer to a string containing the text to write to the file
 * This function creates a new file with the given @filename and writes
 * the text in @text to it. If the file already exists, its contents
 * will be truncated. If @text is NULL, an empty file will be created.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text)
{
	int i = 0, fd;

	if (filename == NULL)
		return (-1);

	if (text == NULL)
		text = "";

	/* Count the number of characters in the text */
	while (text[i] != '\0')
		i++;

	/* Create or truncate the file and open it for writing */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Write the text to the file */
	if (write(fd, text, i) != i)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

