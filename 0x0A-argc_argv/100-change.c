#include "main.h"
/**
 * main - function main
 * @argc: argument count
 * @argv: argument holding values
 * Return: return 0
 */
int main(int argc, char  *argv[])
{
	int cent = 0;
	int dollar;

	if (argc == 2)
	{
		if (strchr(argv[argc - 1], '-'))
		{
			printf("%d\n", 0);
			return (1);
		}
		dollar = atoi(argv[argc - 1]);

		while (dollar > 0)
		{
			if (dollar % 25 == 0)
				dollar = dollar - 25;
			else if (dollar % 10 == 0)
				dollar = dollar - 10;
			else if (dollar % 5 == 0)
				dollar = dollar - 5;
			else if (dollar % 2 == 0)
				dollar = dollar - 2;
			else
				dollar--;
			cent++;
		}
		printf("%d\n", cent);
		return (0);
	}
	printf("Error\n");
	return (1);
}
