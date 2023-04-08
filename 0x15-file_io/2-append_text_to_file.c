#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: a pointer to a string containing the filename
 * @text: a pointer to a string containing the text to append
 * This function appends the text in @text to the end of the file
 * specified by @filename. If the file doesn't exist, it will be
 * created. If @text is NULL, nothing will be appended to the file.
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text)
{
	int i = 0, fd;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text == NULL)
	{
		text = "";
	}

	/* Count the number of characters in the text */
	while (text[i] != '\0')
	{
		i++;
	}

	/* Open the file for writing and appending */
	switch (fd = open(filename, O_WRONLY | O_APPEND))
	{
		case -1:
			return (-1);
		default:
			/* Write the text to the file */
			if (write(fd, text, i) != i)
			{
				close(fd);
				return (-1);
			}
			close(fd);
			return (1);
	}
}
