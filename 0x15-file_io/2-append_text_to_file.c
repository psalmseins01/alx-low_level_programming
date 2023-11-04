#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: file to append text
 * @text_content: text to append to file
 * Return: return 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int rw;
	int handle;

	if (filename == NULL)
		return (-1);

	handle = open(filename, O_WRONLY | O_APPEND);

	if (handle == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		rw = write(handle, text_content, i);

		if (rw == -1)
			return (-1);
	}

	close(handle);

	return (1);
}
