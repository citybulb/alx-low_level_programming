#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function with argc and argv
 * @argc: argument c in integer
 * @argv: pointer array of argument v
 * Return: Always 0
*/

int main(int argc, char *argv[])

{

int i;
int mul = 1;

if (argc > 2)
{

for (i = 1; i < argc; i++)
mul *= atoi(argv[i]);

}

else if (argc < 2)
{
printf("Error\n");

return (1);
}

printf("%d\n", mul);

return (0);

}
