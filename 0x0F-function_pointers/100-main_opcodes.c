#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments (including the program name)
 * @argv: Array of pointers to strings containing the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return 2;
	}

	/* Print the opcodes */
	unsigned char *ptr = (unsigned char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *ptr);
		ptr++;
	}
	printf("\n");

	return 0;
}

