 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_what, file_who, error_close_marking;
	ssize_t newcharacter, readsswrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_what file_who");
		exit(97);
	}

	file_what = open(argv[1], O_RDONLY);
	file_who = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_what, file_who, argv);

	newcharacter = 1024;
	while (newcharacter == 1024)
	{
		newcharacter = read(file_what, buffer, 1024);
		if (newcharacter == -1)
			error_file(-1, 0, argv);
		readsswrite = write(file_who, buffer, newcharacter);
		if (readsswrite == -1)
			error_file(0, -1, argv);
	}

	error_close_marking = close(file_what);
	if (error_close_marking == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_what);
		exit(100);
	}

	error_close_marking = close(file_who);
	if (error_close_marking == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_what);
		exit(100);
	}
	return (0);
}
