#include <stdio.h>

/**
 * main - main function with argc and argv
 * @argc: argument c in integer
 * @argv: pointer array of argument v
 * Return: Always 0
*/

int main(int argc, char *argv[] __attribute__ ((unused)))

{

int i = 0;

if (argc == 1)
printf("%d\n", i);

else
{

printf("%d\n", argc - 1);

}

return (0);

}
