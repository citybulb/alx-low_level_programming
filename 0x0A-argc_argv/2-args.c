#include <stdio.h>

/**
 * main - main function with argc and argv
 * @argc: argument c in integer
 * @argv: pointer array of argument v
 * Return: Always 0
*/

int main(int argc, char *argv[])

{

int i = 0;

if (argc > 0)
{
	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

}

return (0);

}
