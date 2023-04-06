#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file and writes text content to it
 * @file_name: pointer to the name of the file to create
 * @text_content: content to write to the file
 *
 * Description:
 *   This function creates a new file with the given name, and writes
 *   the given text content to it. If the file already exists, its
 *   contents are truncated.
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *file_name, char *text_content)
{
	int file_desc, written_chars = 0;
	size_t content_length = 0;

	if (file_name == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (content_length = 0; text_content[content_length] != '\0';
			content_length++)
		;
	file_desc = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	written_chars = write(file_desc, text_content, content_length);

	close(file_desc);

	if (written_chars != content_length)
		return (-1);

	return (1);
}

