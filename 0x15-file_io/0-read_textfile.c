#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fillers;
	ssize_t theread, thewrite;
	char *buffer;

	if (!filename)
		return (0);

	fillers = open(filename, O_RDONLY);

	if (fillers == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	theread = read(fillers, buffer, letters);
	thewrite = write(STDOUT_FILENO, buffer, theread);

	close(fillers);

	free(buffer);

	return (thewrite);
}
