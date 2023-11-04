#include "main.h"
/**
 * create_file - Function that creates a file
 * @filename: file to create
 * @text_content: content to write into file
 * Return: return file or 0
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int rw;
	int filehandle;

	if (filename == NULL)
		return (-1);

	filehandle = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filehandle == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	rw = write(filehandle, text_content, i);

	if (rw == -1)
		return (-1);

	close(filehandle);

	return (1);
}
