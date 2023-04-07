#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**                                                                                                                                                  
 * main - main function with argc and argv                                                                                                           
 * @argc: argument c in integer                                                                                                                      
 * @argv: pointer array of argument v                                                                                                                
 * Return: 1 if error else 0                                                                                                                                
*/

int main(int argc, char *argv[])

{

int i, num;
int sum = 0;

while (argc-- > 1)
{
for (i = 0; argv[argc][i]; i++)
{
if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);

}

num = atoi(argv[argc]);
sum += num;
}
}
printf("%d\n", sum);

return (0);

}
