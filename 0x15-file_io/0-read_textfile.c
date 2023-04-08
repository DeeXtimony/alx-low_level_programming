#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * print_file_contents - reads a text file and prints its contents
 * @filename: pointer to the name of the file to read
 * @num_letters: number of letters to read from the file
 *
 * Description: This function reads a text file and prints its contents to the
 * standard output.
 *
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t print_file_contents(const char *filename, size_t num_letters)
{
	ssize_t file, letters_read, bytes_written;
	char *buffer;

	buffer = malloc(num_letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	letters_read = read(file, buffer, num_letters);

	bytes_written = write(STDOUT_FILENO, buffer, letters_read);

	close(file);
	free(buffer);

	return (bytes_written);
}
