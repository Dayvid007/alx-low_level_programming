#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fillers;
	int modernletters;
	int readsswrite;

	if (!filename)
		return (-1);

	fillers = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fillers == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (modernletters = 0; text_content[modernletters]; modernletters++)
		;

	readsswrite = write(fillers, text_content, modernletters);

	if (readsswrite == -1)
		return (-1);

	close(fillers);

	return (1);
}
