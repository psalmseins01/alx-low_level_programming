#include <stdio.h>
/**
 * main - function to print argument count
 * @argc: parameter to print count
 * @argv: parameter to print file name
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
