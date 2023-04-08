#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints its contents
* @filename: a pointer to the name of the file to read
* @letters: the maximum number of characters to read and print
* This function reads a text file named @filename and prints its contents
* to the standard output. It will read up to @letters characters or until
* the end of the file is reached, whichever comes first.
* Return: the actual number of characters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t myfile, sh, d;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	myfile = open(filename, O_RDONLY);

	if (myfile == -1)
	{
		free(text);
		return (0);
	}

	sh  = read(myfile, text, letters);

	d = write(STDOUT_FILENO, text, sh);

	close(myfile);

	return (d);
}
