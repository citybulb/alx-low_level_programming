/**
 * _strlen_recursion - Print the total length of a string
 * @s: string character
 * Return: Total string length
*/

int _strlen_recursion(char *s)
{

if (*s != '\0')
{
int i = 0;
i++;
s++;
return (i + _strlen_recursion(s));

}

else
{

return (0);

}

}