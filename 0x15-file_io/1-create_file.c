#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of file
 * @text_content: NULL terminated string to write in file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, w_num, r_num = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (; text_content[r_num]; r_num++)
			;
		w_num = write(file, text_content, r_num);
		if (w_num == -1)
			return (-1);

	}
	close(file);
	return (1);
}
