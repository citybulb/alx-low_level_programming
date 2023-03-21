#include <unistd.h>
#include "main.h"
/**
 * main - Function to print _putchar
 * 
 * Return: 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;
	
	for (i = 0; i < 8; i++)
	_putchar(word[i]);
	_putchar('\n');
	return (0);
}
