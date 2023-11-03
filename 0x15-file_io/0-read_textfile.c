#include "main.h"
/**
 * read_textfile - reads a file and prints it to the POSIX stdout
 * @filename: pointer to file
 * @letters: number of char to read
 * Return: return read bytes or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lnr, lnw;
	char *buffer;
	int handle;

	if (!filename)
		return (0);
	handle = open(filename, O_RDONLY);
	if (handle == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		close(handle);
		return (0);
	}
	lnr = read(handle, buffer, letters);
	close(handle);
	if (lnr == -1)
	{
		free(buffer);
		return (0);
	}
	lnw = write(STDOUT_FILENO, buffer, lnr);
	free(buffer);

	if (lnr != lnw)
		return (0);
	return (lnw);
}
