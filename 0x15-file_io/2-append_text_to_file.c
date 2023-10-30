#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fillers;
	int modernletters;
	int readsswrite;

	if (!filename)
		return (-1);

	fillers = open(filename, O_WRONLY | O_APPEND);

	if (fillers == -1)
		return (-1);

	if (text_content)
	{
		for (modernletters = 0; text_content[modernletters]; modernletters++)
			;

		readsswrite = write(fillers, text_content, modernletters);

		if (readsswrite == -1)
			return (-1);
	}

	close(fillers);

	return (1);
}
