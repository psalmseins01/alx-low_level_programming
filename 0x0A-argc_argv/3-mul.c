#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - function to multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int num_1, num_2 = 0;
	int total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);

		total = num_1 * num_2;
		printf("%d\n", total);
	}
	return (0);
}
