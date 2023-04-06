#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * print_file - function that reads a text file and prints
 * @file_name: pointer to the name of the file
 * @max_letters: maximum number of letters to print
 *
 * Description: This function reads a text file and prints its content
 * to the POSIX standard output.
 *
 * Return: The number of letters printed, or 0 if it fails
 */

ssize_t print_file(const char *file_name, size_t max_letters)
{
	ssize_t file, read_letters, written_letters;
	char *buffer;

	buffer = malloc(max_letters);
	if (buffer == NULL)
		return (0);

	if (file_name == NULL)
		return (0);

	file = open(file_name, O_RDONLY);

	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	read_letters = read(file, buffer, max_letters);

	written_letters = write(STDOUT_FILENO, buffer, read_letters);

	close(file);
	free(buffer);

	return (written_letters);
}
