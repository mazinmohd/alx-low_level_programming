#include "main.h"
#define MAXSIZE 1024
/**
 * _exit_ - prints error messages
 * @error: the exit number
 * @str: name of either file_in or file_out
 * @file: file descriptor
 * Return: 0 on success
*/
int _exit_(int error, char *str, int file)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - copy the content of a file
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int file_1, file_2;
	int r_num, w_num;
	int cls_in, cls_out;
	char buffer[MAXSIZE];

	if (argc != 3)
		_exit_(97, NULL, 0);

	file_1 = open(argv[1], O_RDONLY);
	if (file_1 == -1)
		_exit_(98, argv[1], 0);

	file_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_2 == -1)
		_exit_(99, argv[2], 0);

	while ((r_num = read(file_1, buffer, MAXSIZE)) != 0)
	{
		if (r_num == -1)
			_exit_(98, argv[1], 0);

		w_num = write(file_2, buffer, r_num);
		if (w_num == -1)
			_exit_(99, argv[2], 0);
	}

	cls_in = close(file_1);
	if (cls_in == -1)
		_exit_(100, NULL, file_1);

	cls_out = close(file_2);
	if (cls_out == -1)
		_exit_(100, NULL, file_2);

	return (0);
}
