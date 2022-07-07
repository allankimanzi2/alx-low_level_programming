#include "main.h"
/**
*print_line - draws a straight line in the terminal
*@n: number of underscores
*Description: use _putchar to print only
*/
void print_line(int n)
{
int x;
x = 0;
while (x < n)
{
_putchar('_');
x++;
}
_putchar('\n');
}
