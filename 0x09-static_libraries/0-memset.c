#include "main.h"

/**
 *_memset - function fills the first n bytes of the memory
 *area pointed to by s with the constant byte b
 *@s: fill char
 *@b: constatnt byte
 *@n: number of bytes memory
 *Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *temp = s;

while (n--)
{
*s++ = b;
}

return (temp);

}
