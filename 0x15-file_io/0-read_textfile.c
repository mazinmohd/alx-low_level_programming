#include "main.h"
/**
 * read_textfile - function read text and print is
 * @filename: the name of the file
 * @letters: the number of letters
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t r_num, w_num;
	char *buff;

	file = open(filename, O_RDONLY);

	if (file == -1 || filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	r_num = read(file, buff, letters);

	w_num = write(STDOUT_FILENO, buff, r_num);

	close(file);

	return (w_num);
}
