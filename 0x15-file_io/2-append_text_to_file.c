#include "main.h"
/**
 * append_text_to_file - a funcion that appends to file
 * @filename: the name of file
 * @text_content: text content to add to file
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w_num, r_num = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (text_content[r_num] != '\0'; r_num++)
			;

		w_num = write(file, text_content, r_num);
		if (w_num == -1)
			return (-1);
	}

	close(file);

	return (1);
}
