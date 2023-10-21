#include "function_pointers.h"
/**
  * main - function that prints opcodes
  * @argv: argument vector containing args
  * @argc: argument count
  * Return: return 0
  */
int main(int argc, char *argv[])
{
	int cnt, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (cnt = 0; cnt < bytes; cnt++)
	{
		printf("%02hhx", *((char *)main + cnt));
		if (cnt  < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
